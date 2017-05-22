// ==UserScript==
// @name       Ghoster Ogame
// @namespace  http://richet.me/
// @version    0.2
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

// @include     	*.ogame*gameforge.com/game/index.php?page=*

// ==/UserScript==
GM_addStyle(
    '.saveSend table tr td { width:33%; text-align: center }' +
    '.saveSend table { width:100% } '
);

(function() {
    var menuAdd = '<div class="Ghoster_menu">';
    menuAdd += '<table><tr>';
    menuAdd += '<td id="name" class="textlabel">Petit Transporteur</td>';
    menuAdd += '<td id="numberValue" class="textlabel"><input type="text"></input></td>';
    menuAdd += '</tr></table>';
    menuAdd += '</div>';
/*
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
*/
})();