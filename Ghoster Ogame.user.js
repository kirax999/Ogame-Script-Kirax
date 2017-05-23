// ==UserScript==
// @name       Ghoster Ogame
// @namespace  http://richet.me/
// @version    0.4
// @description  Opens all of the links from the CodeProject newsletter in one go
// @match      *.ogame*
// @include    *.ogame*
// @copyright  2012+, hibbard.eu
// @updateURL http://www.tipsvoorbesparen.nl/1.meta.js
// @require http://code.jquery.com/jquery-latest.js

// @grant    GM_getValue
// @grant    GM_setValue
// @grant    GM_addStyle
// ==/UserScript==

// @include         *.ogame*gameforge.com/game/index.php?page=*

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
    '.Ghoster_menu #mainTable { ' +
    'background: transparent url(//gf1.geo.gfsrv.net/cdn9e/4f73643e86a952be4aed7fdd61805a.gif) 5px 0 repeat-y;' +
    'padding: 5px 10px 0 10px;' +
    'margin: 0;' +
    'text-align: center' +
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
    '}'
);

(function() {
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
        '<select name="typeMission" form="carform">' +
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
    menuAdd += '<tr class="source"><td>Source</td><td>' +
        '<input type="text" name="galaxy" size="1" value="0"></input>' +
        '<input type="text" name="system" size="3" value="0"></input>' +
        '<input type="text" name="planete" size="2" value="0"></input>' +
        '</td></tr>';
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
    /* -------------- ------------------- -------------- */
    menuAdd += '</tr>';
    menuAdd += '<tr>';
    menuAdd += '<table id="listSave">';
    menuAdd += '</table>';
    menuAdd += '</tr>';
    menuAdd += '</table>';
    menuAdd += '</div>';
    $('#contentWrapper').append(menuAdd);
    $('#listSave').append(GM_getValue("senario"));
    senarioAll = GM_getValue("senario");
    if (senarioAll === undefined)
        senarioAll = [];
    console.log("---"+ senarioAll);

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

        senario.name = $('#listParams input[name=nameMission]').val();
        senario.data = data;
        console.log(senarioAll);
        senarioAll.push(senario);

        GM_setValue("senario", senarioAll);
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
})();