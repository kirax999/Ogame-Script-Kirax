// ==UserScript==
// @name       calc all source Ogame
// @namespace  http://richet.me/
// @version    0.1
// @description  Opens all of the links from the CodeProject newsletter in one go
// @match      *.ogame*
// @include    *.ogame*
// @copyright  2012+, hibbard.eu
// @require http://code.jquery.com/jquery-latest.js

// @grant    GM_getValue
// @grant    GM_setValue
// ==/UserScript==

// @include     	*.ogame*gameforge.com/game/index.php?page=*

// ==/UserScript==


$(document).ready(function() {
  var elements = $('.headline > a');
  elements.each(function() {
    hrefs.push($(this).attr('href'));
  });

  if (GM_getValue("met_save") === undefined) {
      alert("met reset");
    GM_setValue("met_save", "0");
  }
  if (GM_getValue("cri_save") === undefined) {
      alert("cri reset");
    GM_setValue("cri_save", "0");
  }
  if (GM_getValue("deut_save") === undefined) {
      alert("deut reset");
    GM_setValue("deut_save", "0");
  }

  $('#metal_box').append('<br><span class="value"><span id="resources_metal_save" class="">' + GM_getValue("met_save") + '</span></span>');
  $('#crystal_box').append('<br><span class="value"><span id="resources_crystal_save" class="">' + GM_getValue("cri_save") + '</span></span>');
  $('#deuterium_box').append('<br><span class="value"><span id="resources_deuterium_save" class="">' + GM_getValue("deut_save") + '</span></span>');
  $('#darkmatter_box').append('<br><span class="value allCalcSourceOgame">all</span>');
  $('#energy_box').append('<br><span class="value resetCalcSourceOgame">reset</span>');

  $("#metal_box").click(function() {
    var metal = parseInt($('#resources_metal').html().replace(/\./g, ""));
    var saveMetal = parseInt($('#resources_metal_save').html().replace(/\./g, ""));
    var numberSource = spliter_number(saveMetal + metal);
    $('#resources_metal_save').html(numberSource);
    GM_setValue("met_save", numberSource);
  });
  $("#crystal_box").click(function() {
    var cri = parseInt($('#resources_crystal').html().replace(/\./g, ""));
    var saveCri = parseInt($('#resources_crystal_save').html().replace(/\./g, ""));
    var numberSource = spliter_number(saveCri + cri);
    $('#resources_crystal_save').html(numberSource);
    GM_setValue("cri_save", numberSource);
  });
  $("#deuterium_box").click(function() {
    var deut = parseInt($('#resources_deuterium').html().replace(/\./g, ""));
      var saveDeut = parseInt($('#resources_deuterium_save').html().replace(/\./g, ""));
    var numberSource = spliter_number(saveDeut + deut);
    $('#resources_deuterium_save').html(numberSource);
    GM_setValue("deut_save", numberSource);
});

  $("#darkmatter_box").click(function() {
    var metal = parseInt($('#resources_metal').html().replace(/\./g, ""));
    var saveMetal = parseInt($('#resources_metal_save').html().replace(/\./g, ""));
    var numberSource = spliter_number(saveMetal + metal);
    $('#resources_metal_save').html(numberSource);
    GM_setValue("met_save", numberSource);
    var cri = parseInt($('#resources_crystal').html().replace(/\./g, ""));
    var saveCri = parseInt($('#resources_crystal_save').html().replace(/\./g, ""));
    var numberSourceCri = spliter_number(saveCri + cri);
    $('#resources_crystal_save').html(numberSourceCri);
    GM_setValue("cri_save", numberSourceCri);
    var deut = parseInt($('#resources_deuterium').html().replace(/\./g, ""));
    var saveDeut = parseInt($('#resources_deuterium_save').html().replace(/\./g, ""));
    var numberSourceDeut = spliter_number(saveDeut + deut);
    $('#resources_deuterium_save').html(numberSourceDeut);
    GM_setValue("deut_save", numberSourceDeut);
  });
  $("#energy_box").click(function() {
    GM_setValue("met_save", "0");
    GM_setValue("cri_save", "0");
    GM_setValue("deut_save", "0");
    $('#resources_metal_save').html("0");
    $('#resources_crystal_save').html("0");
    $('#resources_deuterium_save').html("0");
  });
});

function spliter_number(total) {
    total = total.toString();
    var lenght = total.length;
    var finalString = "";
    var compteur = 1;
    while (lenght > 0) {
        finalString = total.charAt(lenght - 1) + finalString;
        if ((compteur % 3) === 0 && (compteur != total.length))
            finalString = "." + finalString;
        compteur++;
        lenght--;
    }
    return(finalString);
}