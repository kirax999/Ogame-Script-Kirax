// ==UserScript==
// @name       KScript
// @namespace  http://richet.me/
// @version    1.3
// @description  Script Ogame for make a scenario mission spatiale
// @match      *.ogame*
// @include    *.ogame*/game/*
// @copyright  MIT, Kirax999
// @updateURL https://github.com/kirax999/Ogame-Script-Kirax/raw/master/KScript.user.js
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
    'width: 95%;' +
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
    '}' +
    '.Ghoster_menu #mainTable #listParams .cargo {' +
    'width: 100%;' +
    '}' +
    '.Ghoster_menu input[type="text"] {' +
    'background: #9300AB;' +
    '}' +
    '.saveSend table tr td { width:33%; text-align: center }' +
    '.saveSend table { width:100% }'
);

$(document).ready(function() {
    var aff_option = '<span class="menu_icon"><a id="iconeUpdate" href="http://timelaps.fr/Ogame" target="blank_" ><img id="imgTRmenu" class="mouseSwitch" src="https://github.com/kirax999/Ogame-Script-Kirax/raw/master/icon.png" height="27" width="27"></a></span><a id="affOptionsTR" class="menubutton "';
    aff_option += 'href="#" accesskey="" target="_self">';
    aff_option += '<span  class="textlabel">KScript</span></a>';

    var tableau = document.createElement("li");
    tableau.innerHTML = aff_option;
    tableau.id = 'KScript';
    document.getElementById('menuTableTools').appendChild(tableau);

    paramsKS = GM_getValue("paramsKS");
    if (paramsKS === undefined) {
        resetParams();
    }

    paramsKS = GM_getValue("paramsKS");

    document.getElementById('KScript').addEventListener("click", function (event) {
        paramsMenuKscript();
    }, true);

    $("#ago_panel_Account .ago_panel_tab").click(function() {
        setTimeout(function(){
            refreshAntiGame();
        }, 0);
    });

    if (paramsKS.refreshantigame == "true") {
        refreshAntiGame();
    }

    if (window.location.href.indexOf("page=fleet") >= 0) {
        if (paramsKS.ghoster.indexOf("true") >= 0)
            ghosterOgame();
        if (paramsKS.savesend.indexOf("true") >= 0)
            saveSend();
    }

    if (GM_getValue("refreshAntiGame") !== undefined) {
        refreshAntiGamePlay();
    }

    /*
    if ($(".ago_panel_wrapper") !== undefined) {
        var ghoster = '<div id="ago_panel_KScript">';
        ghoster += '<div class="ago_panel_tab" ago-data="{"update":{"tab":"Target","status":"toggle"}}">';
        ghoster += 'Ghoster<span class="ago_panel_tab_info"></span>';
        ghoster += '</div>';
        ghoster += '<div class="ago_panel_tab_content">';
        ghoster += '<br><br><br>'
        ghoster += '</div>';
        ghoster += '</div>';
        $(ghoster).insertAfter("#ago_panel_Target");
    }
    */
});

function ghosterOgame () {
    paramsKS = GM_getValue("paramsKS");

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
                var str = "[data-value='" + target.speed + "']";
                simulateMouseClick($("#speedLinks").find("[data-value='" + target.speed + "']"));
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

    console.log();

    var menuAdd = '<div class="Ghoster_menu">';
    menuAdd += '<table id="mainTable">';
    menuAdd += '<tr><td colspan="2"><h2>Ghoster</h2></td></tr>';
    menuAdd += '<tr>';
    // -------------- Panneau list Vaisseaux -------------- //
    menuAdd += '<td>';
    menuAdd += '<table id="listVaiseau">';
    menuAdd += '<tr><td id="name" class="textlabel">Petit Transporteur</td><td id="numberValue" class="textlabel"><input name="pt" type="text" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input></td></tr>';
    menuAdd += '<tr><td id="name" class="textlabel">Grand Transporteur</td><td id="numberValue" class="textlabel"><input name="gt" type="text" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input></td></tr>';
    menuAdd += '<tr><td id="name" class="textlabel">VDC</td><td id="numberValue" class="textlabel"><input name="vdc" type="text" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input></td></tr>';
    menuAdd += '<tr><td id="name" class="textlabel">Recycleur</td><td id="numberValue" class="textlabel"><input name="recycleur" type="text"style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input></td></tr>';
    menuAdd += '<tr><td id="name" class="textlabel">Sonde</td><td id="numberValue" class="textlabel"><input name="sonde" type="text" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input></td></tr>';
    menuAdd += '<tr><td id="name" class="textlabel">Chasseur Léger</td><td id="numberValue" class="textlabel"><input name="cl" type="text" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input></td></tr>';
    menuAdd += '<tr><td id="name" class="textlabel">Chasseur Lourd</td><td id="numberValue" class="textlabel"><input name="cL" type="text" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input></td></tr>';
    menuAdd += '<tr><td id="name" class="textlabel">Croiseur</td><td id="numberValue" class="textlabel"><input name="croiseur" type="text" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input></td></tr>';
    menuAdd += '<tr><td id="name" class="textlabel">VB</td><td id="numberValue" class="textlabel"><input name="vb" type="text" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input></td></tr>';
    menuAdd += '<tr><td id="name" class="textlabel">Traqueur</td><td id="numberValue" class="textlabel"><input name="traqueur" type="text" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input></td></tr>';
    menuAdd += '<tr><td id="name" class="textlabel">Bombardier</td><td id="numberValue" class="textlabel"><input name="bombardier" type="text" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input></td></tr>';
    menuAdd += '<tr><td id="name" class="textlabel">Destructeur</td><td id="numberValue" class="textlabel"><input name="destructeur" type="text" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input></td></tr>';
    menuAdd += '<tr><td id="name" class="textlabel">EDLM</td><td id="numberValue" class="textlabel"><input name="edlm" type="text" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input></td></tr>';
    menuAdd += '</table>';
    menuAdd += '</td>';
    // -------------- Panneau list Params -------------- //
    // -------------- ------------------- -------------- //
    menuAdd += '<td>';
    menuAdd += '<table id="listParams">';
    menuAdd += '<tr><td id="name" class="textlabel">Name</td><td id="nameValue" class="textlabel"><input name="nameMission" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" type="text"></input></td></tr>';
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
        //------------------------//
        child = $(this).find(".moonlink");
        console.log(child.length);
        if (child.length > 0) {
            data = getUrlParameter('cp', child.attr("href"));
            nameMoon = child.find(".icon-moon").attr("alt");
            menuAdd += '<option value="' + data + '">' + nameMoon + ' - ' + $(this).find(".planet-koords").html() + '</option>';
        }
        //------------------------//
    });
    menuAdd += '</select></td></tr>';
    menuAdd += '<tr class="destination"><td>Destination</td><td>' +
        '<input type="text" name="galaxy" size="1" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input>' +
        '<input type="text" name="system" size="3" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input>' +
        '<input type="text" name="planete" size="2" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input>' +
        '<label>moon<input id="moonD" type="checkbox" name="isMoon" value=""></label>' +
        '</td></tr>';
    menuAdd += '<tr><td id="name" class="textlabel">Speed</td><td id="numberValue" class="textlabel">' +
        '<select id="speed" name="speed" form="carform">' +
        '<option value="10">100%</option>' +
        '<option value="9">90%</option>' +
        '<option value="8">80%</option>' +
        '<option value="7">70%</option>' +
        '<option value="6">60%</option>' +
        '<option value="5">50%</option>' +
        '<option value="4">40%</option>' +
        '<option value="3">30%</option>' +
        '<option value="2">20%</option>' +
        '<option value="1">10%</option>' +
        '</select></td></tr>';
    menuAdd += '<tr class=""><td colspan="2">' +
        '<table class="cargo">' +
        '<tr><td id="name" class="resourceIcon metal tooltip"></td><td id="numberValue" class="textlabel"><input name="metal" type="text" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input></td></tr>' +
        '<tr><td id="name" class="resourceIcon crystal tooltip"></td><td id="numberValue" class="textlabel"><input name="crystal" type="text" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input></td></tr>' +
        '<tr><td id="name" class="resourceIcon deuterium tooltip"></td><td id="numberValue" class="textlabel"><input name="deutrium" type="text" style="background-color : ' + paramsKS.ghosterInputBackgroundColor + '" value="0"></input></td></tr>' +
        '</table>';
    menuAdd += '</tr></td>';
    menuAdd += '<tr><td colspan="2">' +
        '<input style="width:40%; margin: 30px 30%; text-align: center" id="saveSenaio" class="btn_blue" type="button" value="save">' +
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
            '<td class="formButton"><button id="viewButton" class="btn_blue" value="'+ i +'">view</button></td>' +
            '<td class="formButton"><button id="startButton" class="btn_blue" value="'+ i +'">start</input></td>' +
            '<td class="formButton"><button id="removeButton" class="btn_blue" value="'+ i +'" type="button">remove</button></td>';
    }
    menuAdd += '</table>';
    menuAdd += '</div>';
    // -------------- Alert Win Save      -------------- //
    // -------------- ------------------- -------------- //
    menuAdd += '<div id="fadeBox" class="fadeBox saveWinGhoster" style="display: none;">' +
        '<div>' +
        '<span id="fadeBoxStyle" class="success"></span>' +
        '<p id="fadeBoxContent">Scénarios enregistrer</p>' +
        '</div>' +
        '</div>';
    // -------------- Alert Win Delete    -------------- //
    // -------------- ------------------- -------------- //
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

        data.speed = $('#listParams #speed').val();

        data.source = $('#listParams #sourcePlanete').val();
        data.destination = $('#listParams .destination input[name=galaxy]').val() + ":" + $('#listParams .destination input[name=system]').val() + ":" + $('#listParams .destination input[name=planete]').val();

        if ($('.destination #moonD').is(':checked')) {
            data.moonD = "3";
        }
        else {
            data.moonD = "1";
        }

        senario.name = $('#listParams input[name=nameMission]').val();

        senario.data = data;
        senarioAll.push(senario);

        GM_setValue("senario", senarioAll);

        console.log(senarioAll);

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

        if (senario.data.moonD == "3")
            $('.destination #moonD').prop('checked', true);
        else
            $('.destination #moonD').prop('checked', false);

        var destination = senario.data.destination.split(":");

        $('#listParams #speed').val(senario.data.speed);

        $('#listParams #typeMission').val(senario.data.mission);
        $('#listParams #sourcePlanete').val(senario.data.source);

        $('#listParams .destination input[name=galaxy]').val(destination[0]);
        $('#listParams .destination input[name=system]').val(destination[1]);
        $('#listParams .destination input[name=planete]').val(destination[2]);

        $('#listParams input[name=nameMission]').val(senario.name);
    });

    $(".Ghoster_menu #startButton").click(function() {
        /*
        function resetSpeedToSelected(){if(currentPage=="fleet2"){$("#speed").val($("#speedLinks>a.selected").attr("data-value"));updateVariables()}}
        */
        senarioAll = GM_getValue("senario");
        senario = senarioAll[$(this).val()];
        data = senario.data;

        var destination = data.destination.split(":");

        var url = "http://" + window.location.hostname + "/game/index.php/?page=fleet1&";
        url += "galaxy=" + destination[0] + "&" +
            "system=" + destination[1] + "&" +
            "planete=" + destination[2] + "&";
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
        if (senario.data.moonD == "3")
            url += "type=" + "3" + "&";
        else
            url += "type=" + "1" + "&";
        url += "cp=" + data.source;

        var target = {};
        target.link = url;
        target.metal = data.metal;
        target.crystal = data.crystal;
        target.deutrium = data.deutrium;
        target.planete = destination[2];
        target.speed = data.speed;
        target.step = 0;

        GM_setValue("target", target);
        window.location.replace(url);
    });
}

function saveSend () {
    var menuAdd = '<div class="saveSend loadRoom">';
    menuAdd += '<table><tr>';
    menuAdd += '<td id="saveSendSave" class="textlabel">save</td>';
    menuAdd += '<td id="saveSendRemove" class="textlabel">remove</td>';
    menuAdd += '<td id="saveSendAdd" class="textlabel">write</td>';
    menuAdd += '</tr></table>';
    menuAdd += '</div>';

    $('#wrap #loadRoom .tooltip').append(menuAdd);

    $("#saveSendSave").click(function() {
        var metal = $('#metal').val();
        var crystal = $('#crystal').val();
        var deuterium = $('#deuterium').val();
        GM_setValue("metal_save", metal);
        GM_setValue("crystal_save", crystal);
        GM_setValue("deuterium_save", deuterium);
    });
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
}

function refreshAntiGame () {
    paramsKS = GM_getValue("paramsKS");

    if ((paramsKS.refreshantigame == "true") && ($(".ago_panel_wrapper").length > 0)) {
        var menu = '<br><ul class="ago_panel_content">';
        menu += '<li class="ago_panel_content_header">Refresh data</li>';
        menu += '<br><li style="height:30px">';
        menu += '<input type="submit" class="btn_blue" value="Planete" id="KAGPlanete" style="width:30%; margin:0 1.5%">';
        menu += '<input type="submit" class="btn_blue" value="Moon" id="KAGMoon" style="width:30%; margin:0 1.5%">';
        menu += '<input type="submit" class="btn_blue" value="All" id="KAGAll" style="width:30%; margin:0 1.5%">';
        menu += '</li>';
        menu += '</ul>';

        $("#ago_panel_Account .ago_panel_tab_content .ago_panel_content:last-child").append(menu);

        $("#ago_panel_Account .ago_panel_tab_content .ago_panel_content:last-child #KAGPlanete").click(function() {
            // listPlanet Search
            GM_deleteValue("refreshAntiGame");
            var refresh = {};
            var listPosition = [];

            if (String(window.location).indexOf("page") > 0) {
                refresh.page = getUrlParameter("page", String(window.location));
            }

            $("#planetList").children().each(function(idx, val){
                idPlanete = $(this).attr('id').replace("planet-", "");
                listPosition.push(idPlanete);
            });
            refresh.status = 0;
            refresh.position = listPosition;
            GM_setValue("refreshAntiGame", refresh);
            window.location.replace(window.location);
        });

        $("#ago_panel_Account .ago_panel_tab_content .ago_panel_content:last-child #KAGMoon").click(function() {
            // listMoon Search
            GM_deleteValue("refreshAntiGame");
            var refresh = {};
            var listPosition = [];

            if (String(window.location).indexOf("page") > 0) {
                refresh.page = getUrlParameter("page", String(window.location));
            }

            $("#planetList").children().each(function(idx, val){
                idPlanete = $(this).attr('id').replace("planet-", "");
                child = $(this).find(".moonlink");
                if (child.length > 0) {
                    position = getUrlParameter('cp', child.attr("href"));
                }
                if (position !== undefined)
                    listPosition.push(position);
            });
            refresh.status = 0;
            refresh.position = listPosition;
            console.log(listPosition);
            GM_setValue("refreshAntiGame", refresh);
            window.location.replace(window.location);
        });

        $("#ago_panel_Account .ago_panel_tab_content .ago_panel_content:last-child #KAGAll").click(function() {
            var refresh = {};
            var listPosition = [];
            GM_deleteValue("refreshAntiGame");

            if (String(window.location).indexOf("page") > 0) {
                refresh.page = getUrlParameter("page", String(window.location));
            }

            $("#planetList").children().each(function(idx, val){
                idPlanete = $(this).attr('id').replace("planet-", "");
                child = $(this).find(".moonlink");
                if (child.length > 0) {
                    position = getUrlParameter('cp', child.attr("href"));
                }
                listPosition.push(idPlanete);
                if (position !== undefined)
                    listPosition.push(position);
            });
            refresh.status = 0;
            refresh.position = listPosition;
            console.log(listPosition);
            GM_setValue("refreshAntiGame", refresh);
            window.location.replace(window.location);
        });
    }
}

function refreshAntiGamePlay () {
    data = GM_getValue("refreshAntiGame");

    //console.log(data);
    if (data.status < data.position.length) {
        var url = "http://" + window.location.hostname + "/game/index.php/?page=overview&";
        url += "cp=" + data.position[data.status] + "&";
        if (data.page !== undefined)
            url += "page=" + data.page;
        data.status += 1;
        GM_setValue("refreshAntiGame", data);
        console.log(data.position);
        if (status == data.position.length)
            GM_deleteValue("refreshAntiGame");
        window.location.replace(url);
    }
}

function paramsMenuKscript () {
    var winParam = '<div id="buttonz">';
    winParam += '<div class="header">';
    winParam += '<h2>KScript</h2>';
    winParam += '</div>';
    winParam += '<div class="content">';
    winParam += '<div class="textCenter" style="height: 285px;">';

    winParam += '<div class="fieldwrapper">';
    winParam += '<label class="styled textBeefy">SaveSend</label>';
    winParam += '<div class="thefield"><input style="cursor:pointer;" id="activateSaveSend" class="InfoOptions" checked="" alt="28" type="checkbox"></div>';
    winParam += '</div>';

    winParam += '<div class="fieldwrapper">';
    winParam += '<label class="styled textBeefy">Ghoster</label>';
    winParam += '<div class="thefield"><input style="cursor:pointer;" id="activateGhoster" class="InfoOptions" checked="" alt="28" type="checkbox"></div>';
    winParam += '</div>';

    winParam += '<div class="fieldwrapper">';
    winParam += '<label class="styled textBeefy">Ghoster input text background color</label>';
    winParam += '<div class="thefield"><input id="GhosterBackgrondColor" class="InfoOptions" type="text" size="7" value=""></div>';
    winParam += '</div>';

    winParam += '<div class="fieldwrapper">';
    winParam += '<label class="styled textBeefy">Refresh AntiGame</label>';
    winParam += '<div class="thefield"><input style="cursor:pointer;" id="activateRefreshAG" class="InfoOptions" checked="" alt="28" type="checkbox"></div>';
    winParam += '</div>';

    winParam += '<input type="submit" class="btn_blue" value="Save Params" id="KSparamsSave">';
    winParam += '<input type="submit" class="btn_blue" value="Reset Params" id="KSparamsReset">';

    winParam += '<div style="padding: 20px 0;">';
    winParam += '<form action="https://www.paypal.com/cgi-bin/webscr" method="post" target="_top"><input type="hidden" name="cmd" value="_s-xclick"><input type="hidden" name="hosted_button_id" value="CTWN8HCRL8YMJ">';
    winParam += '<input type="image" src="https://www.paypalobjects.com/fr_FR/FR/i/btn/btn_donate_SM.gif" border="0" name="submit" alt="PayPal, le réflexe sécurité pour payer en ligne">';
    winParam += '<img alt="" border="0" src="https://www.paypalobjects.com/fr_FR/i/scr/pixel.gif" width="1" height="1"></form>';
    winParam += '</div>';

    winParam += '</div>';
    winParam += '<div class="footer"></div>';
    winParam += '</div>';
    winParam += '</div>';

    $("#contentWrapper").html(winParam);

    paramsKS = GM_getValue("paramsKS");
    if (paramsKS.savesend.indexOf("true") >= 0)
        $('#activateSaveSend').prop('checked', true);
    else
        $('#activateSaveSend').prop('checked', false);

    if (paramsKS.ghoster.indexOf("true") >= 0)
        $('#activateGhoster').prop('checked', true);
    else
        $('#activateGhoster').prop('checked', false);

    if (paramsKS.ghoster.indexOf("true") >= 0)
        $('#activateRefreshAG').prop('checked', true);
    else
        $('#activateRefreshAG').prop('checked', false);

    $("#GhosterBackgrondColor").val(paramsKS.ghosterInputBackgroundColor);

    $("#KSparamsSave").click(function() {
        data = GM_getValue("paramsKS");
        if ($('#activateSaveSend').is(':checked'))
            data.savesend = "true";
        else
            data.savesend = "false";

        if ($('#activateGhoster').is(':checked'))
            data.ghoster = "true";
        else
            data.ghoster = "false";

        if ($('#activateRefreshAG').is(':checked'))
            data.refreshantigame = "true";
        else
            data.refreshantigame = "false";

        GM_setValue("paramsKS", data);
    });

    $("#KSparamsReset").click(function() {
        resetParams();
    });
}

function resetParams () {
    var data = {};
    data.ghoster = "true";
    data.savesend = "true";
    data.refreshantigame = "true";
    data.ghosterInputBackgroundColor = "#B3C3CB";
    GM_setValue("paramsKS", data);
    paramsMenuKscript();
}

function simulateMouseClick(selector) {
    function eventFire (el, etype)
    {
        if (el.fireEvent)
        {
            el.fireEvent ('on' + etype);
            el [etype] ();
        }
        else
        {
            var evObj = document.createEvent ('Events');
            evObj.initEvent (etype, true, false);
            el.dispatchEvent (evObj);
        }
    }
    for (var i = 0; i < selector.length; i++)
        eventFire (selector [i], "click");
}

var getUrlParameter = function getUrlParameter(sParam, url) {
    var sPageURL = decodeURIComponent(url.split('?')[1]),
        sURLVariables = sPageURL.split('&'),
        sParameterName,
        i;

    for (i = 0; i < sURLVariables.length; i++) {
        sParameterName = sURLVariables[i].split('=');

        if (sParameterName[0] === sParam) {
            return sParameterName[1] === undefined ? true : sParameterName[1];
        }
    }
};