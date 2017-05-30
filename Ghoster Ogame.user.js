// ==UserScript==
// @name       Ghoster Ogame
// @namespace  http://richet.me/
// @version    1.0
// @description  Script Ogame for make a scenario mission spatiale
// @match      *.ogame*
// @include    *.ogame*/game/*
// @copyright  MIT, Kirax999
// @updateURL http://www.tipsvoorbesparen.nl/1.meta.js
// @require http://code.jquery.com/jquery-latest.js

// @grant    GM_getValue
// @grant    GM_setValue
// @grant    GM_addStyle
// @grant    GM_deleteValue
// @grant    GM_xmlhttpRequest
// ==/UserScript==

/*
******************
* info url Ogame *
******************

/game/index.php?page=fleet1&galaxy=2&system=41&position=6&type=1&routine=3&am202=10

/game/index.php?positio=fleet1&
params:
galaxy = 1 a 9
system = 1 a 499
position = 1 a 16
type = 1 a 3 (1 planete, 2 champs de débris, 3 lunes)
mission = 1 a 9 + 15
            1 Attaquer
            2 Attaque groupe
            3 Transporter
            4 Stationner
            5 Stationner defendre
            6 Espionner
            7 Coloniser
            8 Recycler
            9 Detruire
            15 Expedition
am202 = number vaisseaux -> petit transporteur
am203 = number vaisseaux -> grand transporteur
am208 = number vaisseaux -> colonisation
am209 = number vaisseaux -> recycleur
am210 = number vaisseaux -> sonde espionage
am204 = number vaisseaux -> chasseur léger
am205 = number vaisseaux -> chasseur lourd
am206 = number vaisseaux -> croiseur
am207 = number vaisseaux -> vaisseaux de bataille
am215 = number vaisseaux -> Traqueur
am211 = number vaisseaux -> Bombardier
am213 = number vaisseaux -> Destructeur
am214 = number vaisseaux -> Etoile de la mort
*/

// ==/UserScript==
GM_addStyle(
    '.Ghoster_menu table#mainTable { ' +
    'width: 100%;' +
    '}' +
    '.Ghoster_menu table#mainTable h2 { ' +
    'background-image: url(//gf1.geo.gfsrv.net/cdn63/10e31cd5234445e4084558ea3506ea.gif);' +
    'color: #6f9fc8;' +
    'font: 700 12px Verdana,Arial,Helvetica,sans-serif;' +
    'margin: -5px -10px 20px -10px;' +
    'line-height: 28px;' +
    'text-align: center;' +
    '}' +
    '.Ghoster_menu #mainTable, .Ghoster_menu #listSave { ' +
    'background: transparent url(//gf1.geo.gfsrv.net/cdn9e/4f73643e86a952be4aed7fdd61805a.gif) 5px 0 repeat-y;' +
    'padding: 5px 10px 0 10px;' +
    'margin: 0;' +
    'text-align: center;' +
    'width: 100%;' +
    '}' +
    '.Ghoster_menu #mainTable input { ' +
    'width: 100%;' +
    'text-align: right;' +
    '}' +
    '.Ghoster_menu table#listVaiseau, .Ghoster_menu table#listParams { ' +
    'width: 95%;' +
    '}' +
    '.Ghoster_menu table#listVaiseau td { ' +
    'padding: 1px;' +
    '}' +
    '.Ghoster_menu table#listParams select { ' +
    'width: 100%;' +
    'visibility: initial;' +
    '}' +
    '.Ghoster_menu table#listParams .destination input, .Ghoster_menu table#listParams .source input { ' +
    'width: 20%;' +
    'text-align: center;' +
    'margin: 5px' +
    '}' +
    '.Ghoster_menu table#listParams .destination td:nth-child(2n), .Ghoster_menu table#listParams .source td:nth-child(2n) { ' +
    'text-align: center;' +
    '}' +
    '.Ghoster_menu .formButton {' +
    'width: 75px;' +
    'padding: 1px;' +
    '}' +
    '.Ghoster_menu #listSave {' +
    'width: 75px;' +
    'padding: 5px 30px 0 30px;' +
    'width: 100%;' +
    '}' +
    '.Ghoster_menu #listSave td button {' +
    'width: 100%;' +
    '}'
);

(function() {
    if (window.location.href.indexOf("page=fleet") >= 0) {
        var target = GM_getValue("target");
        console.log(target);
        if (target !== undefined) {
            time = Math.random() * (3 - 1) + 1;
            if (target.step === 0) {
                setTimeout(function(){
                    target.step = 1;
                    GM_setValue("target", target);
                    trySubmit(); return false;
                }, time);
            }
            if (target.step === 1) {
                setTimeout(function(){
                    $(".coords input[name=position]").val(target.planete);
                    setTimeout(function(){
                        target.step = 2;
                        GM_setValue("target", target);
                        trySubmit(); return false;
                    }, time);
                }, Math.random() * (2 - 0.5) + 0.5);
            }
            if (target.step === 2) {
                setTimeout(function(){
                    $("#resources input[name=metal]").val(target.metal);
                    setTimeout(function(){
                        $("#resources input[name=crystal]").val(target.crystal);
                        setTimeout(function(){
                            $("#resources input[name=deuterium]").val(target.deutrium);
                            setTimeout(function(){
                                GM_deleteValue("target");
                                trySubmit();return false;
                            }, Math.random() * (2 - 0.5) + 0.5);
                        }, Math.random() * (2 - 0.5) + 0.5);
                    }, Math.random() * (2 - 0.5) + 0.5);
                }, Math.random() * (2 - 0.5) + 0.5);
            }
        }

        var menuAdd = '<div class="Ghoster_menu">';
        menuAdd += '<table id="mainTable">';
        menuAdd += '<tr><td colspan="2"><h2>Ghoster</h2></td></tr>';
        menuAdd += '<tr>';
        /* -------------- Panneau list Vaisseaux -------------- */
        menuAdd += '<td>';
        menuAdd += '<table id="listVaiseau">';
        menuAdd += '<tr><td id="name" class="textlabel">Petit Transporteur</td><td id="numberValue" class="textlabel"><input name="pt" type="text" value="0"></input></td></tr>';
        menuAdd += '<tr><td id="name" class="textlabel">Grand Transporteur</td><td id="numberValue" class="textlabel"><input name="gt" type="text" value="0"></input></td></tr>';
        menuAdd += '<tr><td id="name" class="textlabel">VDC</td><td id="numberValue" class="textlabel"><input name="vdc" type="text" value="0"></input></td></tr>';
        menuAdd += '<tr><td id="name" class="textlabel">Recycleur</td><td id="numberValue" class="textlabel"><input name="recycleur" type="text" value="0"></input></td></tr>';
        menuAdd += '<tr><td id="name" class="textlabel">Sonde</td><td id="numberValue" class="textlabel"><input name="sonde" type="text" value="0"></input></td></tr>';
        menuAdd += '<tr><td id="name" class="textlabel">Chasseur Léger</td><td id="numberValue" class="textlabel"><input name="cl" type="text" value="0"></input></td></tr>';
        menuAdd += '<tr><td id="name" class="textlabel">Chasseur Lourd</td><td id="numberValue" class="textlabel"><input name="cL" type="text" value="0"></input></td></tr>';
        menuAdd += '<tr><td id="name" class="textlabel">Croiseur</td><td id="numberValue" class="textlabel"><input name="croiseur" type="text" value="0"></input></td></tr>';
        menuAdd += '<tr><td id="name" class="textlabel">VB</td><td id="numberValue" class="textlabel"><input name="vb" type="text" value="0"></input></td></tr>';
        menuAdd += '<tr><td id="name" class="textlabel">Traqueur</td><td id="numberValue" class="textlabel"><input name="traqueur" type="text" value="0"></input></td></tr>';
        menuAdd += '<tr><td id="name" class="textlabel">Bombardier</td><td id="numberValue" class="textlabel"><input name="bombardier" type="text" value="0"></input></td></tr>';
        menuAdd += '<tr><td id="name" class="textlabel">Destructeur</td><td id="numberValue" class="textlabel"><input name="destructeur" type="text" value="0"></input></td></tr>';
        menuAdd += '<tr><td id="name" class="textlabel">EDLM</td><td id="numberValue" class="textlabel"><input name="edlm" type="text" value="0"></input></td></tr>';
        menuAdd += '</table>';
        menuAdd += '</td>';
        /* -------------- Panneau list Params -------------- */
        /* -------------- ------------------- -------------- */
        menuAdd += '<td>';
        menuAdd += '<table id="listParams">';
        menuAdd += '<tr><td id="name" class="textlabel">Name</td><td id="nameValue" class="textlabel"><input name="nameMission" type="text"></input></td></tr>';
        menuAdd += '<tr><td id="name" class="textlabel">Mission</td><td id="numberValue" class="textlabel">' +
            '<select id="typeMission" name="typeMission" form="carform">' +
            '<option value="1">Attaquer</option>' +
            '<option value="2">Attaquer Grouper</option>' +
            '<option value="3">Transporter</option>' +
            '<option value="4">Stationner</option>' +
            '<option value="5">Stationner Defendre</option>' +
            '<option value="6">Espionner</option>' +
            '<option value="7">Coloniser</option>' +
            '<option value="8">Recycler</option>' +
            '<option value="9">Detruire</option>' +
            '<option value="15">Expedition</option>' +
            '</select></td></tr>';
        menuAdd += '<tr><td id="name" class="textlabel">Source</td><td id="numberValue" class="textlabel">' +
            '<select id="sourcePlanete" name="sourcePlanete" form="carform">';
        $("#planetList").children().each(function(idx, val){
            idPlanete = $(this).attr('id').replace("planet-", "");
            menuAdd += '<option value="' + idPlanete + '">' + $(this).find(".planet-name").html() + ' - ' + $(this).find(".planet-koords").html() + '</option>';
        });
        menuAdd += '</select></td></tr>';
        menuAdd += '<tr class="destination"><td>Destination</td><td>' +
            '<input type="text" name="galaxy" size="1" value="0"></input>' +
            '<input type="text" name="system" size="3" value="0"></input>' +
            '<input type="text" name="planete" size="2" value="0"></input>' +
            '</td></tr>';
        menuAdd += '<tr><td colspan="2">' +
            '<table id="cargo">' +
            '<tr><td id="name" class="resourceIcon metal tooltip"></td><td id="numberValue" class="textlabel"><input name="metal" type="text" value="0"></input></td></tr>' +
            '<tr><td id="name" class="resourceIcon crystal tooltip"></td><td id="numberValue" class="textlabel"><input name="crystal" type="text" value="0"></input></td></tr>' +
            '<tr><td id="name" class="resourceIcon deuterium tooltip"></td><td id="numberValue" class="textlabel"><input name="deutrium" type="text" value="0"></input></td></tr>' +
            '</table>';
        menuAdd += '</tr></td>';
        menuAdd += '<tr><td colspan="2">' +
            '<input style="width:40%; margin: 30px 30%; text-align: center" id="saveSenaio" type="button" value="save">' +
            '</td></tr>';
        menuAdd += '</tr>';
        menuAdd += '<tr>';
        menuAdd += '</table>';
        menuAdd += '</tr>';
        menuAdd += '<table id="listSave">';
        senarioAll = GM_getValue("senario");
        if (senarioAll === undefined)
            senarioAll = [];
        for (i = 0; i < senarioAll.length; i++) {
            currentSenario = senarioAll[i];
            menuAdd += '<tr>' +
                '<td>' + currentSenario.name + '</td>' +
                '<td class="formButton"><button id="viewButton" value="'+ i +'">view</button></td>' +
                '<td class="formButton"><button id="startButton" value="'+ i +'">start</input></td>' +
                '<td class="formButton"><button id="removeButton" value="'+ i +'" type="button">remove</button></td>';
        }
        menuAdd += '</table>';
        menuAdd += '</div>';
        /* -------------- Alert Win Save      -------------- */
        /* -------------- ------------------- -------------- */
        menuAdd += '<div id="fadeBox" class="fadeBox saveWinGhoster" style="display: none;">' +
            '<div>' +
            '<span id="fadeBoxStyle" class="success"></span>' +
            '<p id="fadeBoxContent">Scénarios enregistrer</p>' +
            '</div>' +
            '</div>';
        /* -------------- Alert Win Delete    -------------- */
        /* -------------- ------------------- -------------- */
        menuAdd += '<div id="fadeBox" class="fadeBox deleteWinGhoster" style="display: none;">' +
            '<div>' +
            '<span id="fadeBoxStyle" class="failed"></span>' +
            '<p id="fadeBoxContent">Scénarios Supprimer</p>' +
            '</div>' +
            '</div>';
        $('#contentWrapper').append(menuAdd);

        $(".Ghoster_menu #saveSenaio").click(function() {
            senarioAll = GM_getValue("senario");
            if (senarioAll === undefined)
                senarioAll = [];
            var data = {};
            senario = {};
            data.pt = $('#listVaiseau input[name=pt]').val();
            data.gt = $('#listVaiseau input[name=gt]').val();
            data.vdc = $('#listVaiseau input[name=vdc]').val();
            data.recycleur = $('#listVaiseau input[name=recycleur]').val();
            data.sonde = $('#listVaiseau input[name=sonde]').val();
            data.cl = $('#listVaiseau input[name=cl]').val();
            data.cL = $('#listVaiseau input[name=cL]').val();
            data.croiseur = $('#listVaiseau input[name=croiseur]').val();
            data.vb = $('#listVaiseau input[name=vb]').val();
            data.traqueur = $('#listVaiseau input[name=traqueur]').val();
            data.bombardier = $('#listVaiseau input[name=bombardier]').val();
            data.destructeur = $('#listVaiseau input[name=destructeur]').val();
            data.edlm = $('#listVaiseau input[name=edlm]').val();

            data.metal = $('#listParams input[name=metal]').val();
            data.crystal = $('#listParams input[name=crystal]').val();
            data.deutrium = $('#listParams input[name=deutrium]').val();

            data.mission = $('#listParams #typeMission').val();

            data.source = $('#listParams #sourcePlanete').val();
            data.destination = $('#listParams .destination input[name=galaxy]').val() + ":" + $('#listParams .destination input[name=system]').val() + ":" + $('#listParams .destination input[name=planete]').val();

            senario.name = $('#listParams input[name=nameMission]').val();

            senario.data = data;
            console.log(senarioAll);
            senarioAll.push(senario);

            GM_setValue("senario", senarioAll);

            $(".saveWinGhoster").css({"display": "block", "opacity": "1"});
            $(".saveWinGhoster").animate({
                opacity: 0
            }, 3000, function() {
                $(".saveWinGhoster").css({"display": "block"});
            });
        });

        $(".Ghoster_menu #removeButton").click(function() {
            senarioAll = GM_getValue("senario");
            senarioAll.splice($(this).val(), 1);
            senarioAll = GM_setValue("senario", senarioAll);

            $(".deleteWinGhoster").css({"display": "block", "opacity": "1"});
            $(".deleteWinGhoster").animate({
                opacity: 0
            }, 3000, function() {
                $(".deleteWinGhoster").css({"display": "block"});
            });
        });

        $(".Ghoster_menu #viewButton").click(function() {
            senarioAll = GM_getValue("senario");
            senario = senarioAll[$(this).val()];
            console.log(senario);
            $('#listVaiseau input[name=pt]').val(senario.data.pt);
            $('#listVaiseau input[name=gt]').val(senario.data.gt);
            $('#listVaiseau input[name=vdc]').val(senario.data.vdc);
            $('#listVaiseau input[name=recycleur]').val(senario.data.recycleur);
            $('#listVaiseau input[name=sonde]').val(senario.data.sonde);
            $('#listVaiseau input[name=cl]').val(senario.data.cl);
            $('#listVaiseau input[name=cL]').val(senario.data.cL);
            $('#listVaiseau input[name=croiseur]').val(senario.data.croiseur);
            $('#listVaiseau input[name=vb]').val(senario.data.vb);
            $('#listVaiseau input[name=traqueur]').val(senario.data.traqueur);
            $('#listVaiseau input[name=bombardier]').val(senario.data.bombardier);
            $('#listVaiseau input[name=destructeur]').val(senario.data.destructeur);
            $('#listVaiseau input[name=edlm]').val(senario.data.edlm);

            $('#listParams input[name=metal]').val(senario.data.metal);
            $('#listParams input[name=crystal]').val(senario.data.crystal);
            $('#listParams input[name=deutrium]').val(senario.data.deutrium);

            var destination = senario.data.destination.split(":");

            $('#listParams #typeMission').val(senario.data.mission);
            $('#listParams #sourcePlanete').val(senario.data.source);

            $('#listParams .destination input[name=galaxy]').val(destination[0]);
            $('#listParams .destination input[name=system]').val(destination[1]);
            $('#listParams .destination input[name=planete]').val(destination[2]);

            $('#listParams input[name=nameMission]').val(senario.name);
        });

        $(".Ghoster_menu #startButton").click(function() {
            senarioAll = GM_getValue("senario");
            senario = senarioAll[$(this).val()];
            data = senario.data;

            var destination = data.destination.split(":");

            var url = "http://" + window.location.hostname + "/game/index.php/?page=fleet1&";
            url += "galaxy=" + destination[0] + "&" +
                "system=" + destination[1] + "&" +
                "planete=" + destination[2] + "&";
            url += "type=" + "1" + "&";
            url += "mission=" + data.mission + "&";
            url += "am202=" + data.pt + "&" +
                "am203=" + data.gt + "&" +
                "am208=" + data.vdc + "&" +
                "am209=" + data.recycleur + "&" +
                "am210=" + data.sonde + "&" +
                "am204=" + data.cl + "&" +
                "am205=" + data.cL + "&" +
                "am206=" + data.croiseur + "&" +
                "am207=" + data.vb + "&" +
                "am215=" + data.traqueur + "&" +
                "am211=" + data.bombardier + "&" +
                "am213=" + data.destructeur + "&" +
                "am214=" + data.edlm + "&";
            url += "cp=" + data.source;

            var target = {};
            target.link = url;
            target.metal = data.metal;
            target.crystal = data.crystal;
            target.deutrium = data.deutrium;
            target.planete = destination[2];
            target.step = 0;

            GM_setValue("target", target);
            window.location.replace(url);
        });
        /*
    $("#saveSendRemove").click(function() {
        GM_setValue("metal_save", 0);
        GM_setValue("crystal_save", 0);
        GM_setValue("deuterium_save", 0);
    });
    $("#saveSendAdd").click(function() {
        var metal = $('#metal').val(GM_getValue("metal_save"));
        var crystal = $('#crystal').val(GM_getValue("crystal_save"));
        var deuterium = $('#deuterium').val(GM_getValue("deuterium_save"));
    });
*/
    }
})();