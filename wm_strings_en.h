/**
 * wm_strings_en.h
 * engligh strings for
 * WiFiManager, a library for the ESP8266/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 *
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_EN_H_
#define _WM_STRINGS_EN_H_

#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! ABOVE WILL NOT WORK if you define in your sketch, must be build flag, if anyone one knows how to order includes to be able to do this it would be neat.. I have seen it done..

// strings files must include a consts file!
#include "wm_consts_en.h" // include constants, tokens, routes

const char WM_LANGUAGE[] PROGMEM = "en-US"; // i18n lang code

const char HTTP_HEAD_START[] PROGMEM = "<!DOCTYPE html>"
									   "<html lang='en'><head>"
									   "<meta name='format-detection' content='telephone=no'>"
									   "<meta charset='UTF-8'>"
									   "<meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/>"
									   "<title>{v}</title>";

const char HTTP_SCRIPT[] PROGMEM = "<script>function c(l){"
								   "document.getElementById('s').value=l.getAttribute('data-ssid')||l.innerText||l.textContent;"
								   "p = l.nextElementSibling.classList.contains('l');"
								   "document.getElementById('p').disabled = !p;"
								   "if(p)document.getElementById('p').focus();};"
								   "function f() {var x = document.getElementById('p');x.type==='password'?x.type='text':x.type='password';}"
								   "</script>"; // @todo add button states, disable on click , show ack , spinner etc

const char HTTP_HEAD_END[] PROGMEM = "</head><body class='{c}'><div class='wrap'>"; // {c} = _bodyclass
// example of embedded logo, base64 encoded inline, No styling here
const char HTTP_ROOT_MAIN[] PROGMEM = "<div style=\"text-align: center;\"><img alt='CredoSense' src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGQAAABKCAMAAAB6mgEgAAAACXBIWXMAAAsSAAALEgHS3X78AAAAM1BMVEX///8AkUUAkUUAkUUAkUUAkUUAkUUAkUUAkUUAkUUAkUUAkUUAkUUAkUUAkUUAkUUAkUXKK5byAAAAEHRSTlMAECAwQFBgcICQoLDA0ODwVOCoyAAABAhJREFUWMPtWUmi5CAIRUVNDEbuf9peRI1j2lT936tmlxJ5zKIF8Ex0OvXMge484CtCZmYn5gzyYGbGr0AkMzMHPVs3gZmZ5XemnMxzY4S7Vv13GGA4yhlERvm4aD4QLOyms+ZJUOj8joEbQ4TZrFgEIWYOLvpZMY/1NXkhGildYGZaBIl7t0spm4XZkmlrfhbph3cgfF4eclmcu3naH/HkdyA+C9gFAAjfo9wYXgCA2O/vRZDbQVdS9SgNhroZap/+tQJjUpmMQpuPKI7ZW8oYJhQbluvSFZvYJZRTABJbAMuEIM6E0XEvFkqpGnsRURwAmIAYTBSdV27DJ2WiHe1GTKPCzKeKQh0ASCJZfKpKnzYiwuzkdK6pA7t6LPTD6HkfPS59jJauMag5BFIVZy4qYWS9mQ0ASGJmpwCUY2aSVdVfypRRx6xogILnKHh0vf3yw11xp+69yqzbcybVZ6XJdnPtjQCXjkFm77BPQmbei6ZTeQJqvqKj0xBlluhVQJSvV6D55myM8M8oLYYXfe9MnaZ1S86gplpalBYjV4hsleO9OC+qTgJ9DUy6cNyU/KxDJ1D1vi+E3Si7C30XDm7vMFwvjQbJWrosowgATXUXJg0gGozeVSmxB6bkEz2hbAAA6OMZbJg9FiFOGBhGCt8DXEe2zrFLjA2MAMjBlud/stsOBUV1j+Fi9IygUllJQcpAsjSTxDQcRfXIMFz21ebkEktkK1e6SVm17Wxs59Xi88mXwoRYBiDluzr5yeuz2Jfh93UzuGPun0Le9P6Jw+6B7hJ55vnOnBWsmWyvev+UK5urLmPPHYXA/YIg9ezubuh0M75c5NhE1uP6XnhMjooTi1wvjusphu+mimlYch3EwYCoGjwEzfYFNbm5LWq04oHxHc98gPKAYRYGxyWUBwy3NJ4uoHyCAeBfoTxgPF0gxBsU4T9KlVcbP8botnptXRhuzYzBWe1fYbQoGgBAHwNHR7ZDd0OtX7hlVygu3Z7HI1G6h7uXGA1Kag2S+pEoD+jqNQaAOEa5iOddxua+gDeZf6y+SFTmu/owxNjmJheA9StjPTMXPUh6DgJAhHtgrnve9vJ1KAw73cYEQJUw0w/Ry1SMH6Z6GrK2ejAy3XDz6kGKhl4QRGLoVxLwCd0Cyoc7Ifqnu/fhgDprH1xxu/T84qmzqJit78LbJ9UxfK/IWXa2L3fZjPlj67Ixd6mdW64OuZ31o9i3pIqhx+8W0e5FHyEFP0M4na0I4edoDPOjEAAAam9GzLAr+AXSdyz8ruH3SCEiKvhP/5js9gWtPj6DmRbf34jeHI7S+vcI3r7+20naV/aQlR+X3xIQfV2aaJ+QaLc/1sAE6m1zRETETEREbts0Lp4kfwBXwLhrmjwVPgAAAABJRU5ErkJggg==' /><h1>{t}</h1><h4>{pn}</h4>{pm}<br/></div>";

// const char HTTP_ROOT_MAIN[]        PROGMEM = "<h1>{t}</h1><h3>{v}</h3>";

const char *const HTTP_PORTAL_MENU[] PROGMEM = {
	"<form action='/wifi'    method='get'><button>Configure WiFi</button></form><br/>\n",			// MENU_WIFI
	"<form action='/0wifi'   method='get'><button>Configure WiFi (No scan)</button></form><br/>\n", // MENU_WIFINOSCAN
	"<form action='/info'    method='get'><button>Info</button></form><br/>\n",						// MENU_INFO
	"<form action='/live'    method='get'><button>Live Data</button></form><br/>\n",				// MENU_live
	"<form action='/sdata'    method='get'><button>sdata</button></form><br/>\n",					// MENU_sdata
	"<form action='/storage'    method='get'><button>Stored Data</button></button></form><br/>\n",	// MENU_storage
	"<form action='/param'   method='get'><button>Setup</button></form><br/>\n",					// MENU_PARAM
	"<form action='/close'   method='get'><button>Close</button></form><br/>\n",					// MENU_CLOSE
	"<form action='/restart' method='get'><button>Restart</button></form><br/>\n",					// MENU_RESTART
	"<form action='/exit'    method='get'><button>Exit</button></form><br/>\n",						// MENU_EXIT
	"<form action='/erase'   method='get'><button class='D'>Erase</button></form><br/>\n",			// MENU_ERASE
	"<form action='/update'  method='get'><button>Update</button></form><br/>\n",					// MENU_UPDATE
	"<hr><br/>"																						// MENU_SEP
};

// const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[3] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[] PROGMEM = "";
const char HTTP_ITEM_QI[] PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // rssi icons
const char HTTP_ITEM_QP[] PROGMEM = "<div class='q {h}'>{r}%</div>";												 // rssi percentage {h} = hidden showperc pref
const char HTTP_ITEM[] PROGMEM = "<div><a href='#p' onclick='c(this)' data-ssid='{V}'>{v}</a>{qi}{qp}</div>";		 // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char HTTP_FORM_START[] PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[] PROGMEM = "<label for='s'>SSID</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' value='{v}'><br/><label for='p'>Password</label><input id='p' name='p' maxlength='64' type='password' value='{p}'><input type='checkbox' id='showpass' onclick='f()'> <label for='showpass'>Show Password</label><br/>";
const char HTTP_FORM_WIFI_END[] PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[] PROGMEM = "<br/><br/><button type='submit'>Save</button></form>";
const char HTTP_FORM_LABEL[] PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[] PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>\n"; // do not remove newline!

const char HTTP_SCAN_LINK[] PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Refresh</button></form>";
const char HTTP_SAVED[] PROGMEM = "<div class='msg'>WiFi credentials saved.<br>Go back to home to check connectivity status.</div>";
const char HTTP_PARAMSAVED[] PROGMEM = "<div class='msg S'>Settings saved.<br/>Close browser or go back to re-configure.</div>";
const char HTTP_END[] PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[] PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Erase WiFi config</button></form>";
const char HTTP_UPDATEBTN[] PROGMEM = "<br/><form action='/update' method='get'><button>Update</button></form>";
const char HTTP_BACKBTN[] PROGMEM = "<br/><form action='/' method='get'><button>Back to home</button></form>";

const char HTTP_STATUS_ON[] PROGMEM = "<div class='msg S'><strong>Connected</strong> to {v}<br/><em><small>with IP {i}</small></em></div>";
const char HTTP_STATUS_OFF[] PROGMEM = "<div class='msg D {c}'><strong>Not connected</strong> to {v}{r}</div>"; // {c=class} {v=ssid} {r=status_off}
const char HTTP_STATUS_OFFPW[] PROGMEM = "<br/>Authentication failure";										  // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[] PROGMEM = "<br/>AP not found";												  // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[] PROGMEM = "<br/>Could not connect";										  // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[] PROGMEM = "<div class='msg'>No AP set</div>";
const char HTTP_BR[] PROGMEM = "<br/>";

const char STORAGE_HEAD[] PROGMEM = "<!DOCTYPE html><html>"
									"<head>"
									"<title>Storage Data</title>" // NOTE: 1em = 16px
									"<meta name='viewport' content='user-scalable=yes,initial-scale=1.0,width=device-width'>"
									"<style>" // From here style:
									"body{max-width:500px;margin:0 auto;font-family:verdana;font-size:100%; text-align: center;}"
									"ul{clear:left; float:right; list-style:none; margin:10px 0 10px 0;padding:0;position:relative;right:50%; text-align:center;font-size:1em;}"
									"li{float:left; display: block; position:relative; left:50%;}"
									"li a{color:white; display: block; background-color:#228B22; padding:0.44em 0.44em;text-decoration:none;font-size:100%;}"
									"li a:hover{background-color:#68b768; font-size:100%; text-decoration: underline}"
									"h1{margin-left: auto; margin-right: auto; color:white;display:block; border-radius:0em;font-size:1.5em;padding: 0.2em;background:#228B22; text-align: center; overflow: hidden; max-width:500px; min-width: 200px}"
									"h2{margin-left: auto; margin-right: auto; color:blue;font-size:0.8em;}"
									"h3{margin-left: auto; margin-right: auto; text-align: center; font-size:0.8em;}"
									".button,input[type='button'],input[type='submit']{border: none;border-radius: 8px;color: white;padding: 6px 12px;text-align: center;font-size: 0.9em;transition-duration: 0.4s;cursor: pointer;}"
									".button1{background-color:#228B22; color:#fff}"
									".button1:hover{background-color:#68b768;}"
									".button2{background-color:#db3c30; color:#fff}"
									".button2:hover{background-color:#f5554a;}"
									".button3{background-color:#737373; color:#fff}"
									".button3:hover{background-color:#999999;}"
									"table{font-family:verdana;font-size:0.9em;border-collapse:collapse;width:100%;}"
									"th,td {border:0.06em solid #dddddd;text-align:center;padding:0.5em;border-bottom:0.06em solid #dddddd;}"
									"tr:nth-child(odd) {background-color:#eeeeee;}"
									".rcorners_n {border-radius:3rem;background:#228B22;padding:0.3em 0.3em;width:20%;color:white;font-size:75%;}"
									".rcorners_m {border-radius:3rem;background:#228B22;padding:0.3em 0.3em;width:50%;color:white;font-size:75%;}"
									".rcorners_w {border-radius:3rem;background:#228B22;padding:0.3em 0.3em;width:70%;color:white;font-size:75%;}"
									".column{float:left;width:50%;height:45%;}"
									".row:after{content:'';display:table;clear:both;}"
									"*{box-sizing:border-box;}"
									"a{font-size:75%;}"
									"p{font-size:75%;}"
									"</style></head><body><h1>Storage</h1>"
									"<ul>"
									"<li><a href='/storage'>Files</a></li>" // Menu bar with commands
									"<li><a href='/fupload'>Upload</a></li>"
									"</ul>";
									
const char HTTP_STYLE[] PROGMEM = "<style>"
								  ".c,body{text-align:center;font-family:verdana}div,input,select{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box}"
								  "input,button,select,.msg{border-radius:.3rem;width: 100%}input[type=radio],input[type=checkbox]{width:auto}"
								  "button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#228B22;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%}"
								  "input[type='file']{border:1px solid #228B22}"
								  ".wrap {text-align:left;display:inline-block;min-width:260px;max-width:500px}"
								  // links
								  "a{color:#000;font-weight:700;text-decoration:none}a:hover{color:#228B22;text-decoration:underline}"
								  // quality icons
								  ".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
								  "background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
								  // icons @2x media query (32px rescaled)
								  "@media (-webkit-min-device-pixel-ratio: 2),(min-resolution: 192dpi){.q:before,.q:after {"
								  "background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
								  "background-size: 95px 16px;}}"
								  // msg callouts
								  ".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#777}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#228B22}.msg.P h4{color:#228B22}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}.msg.S{border-left-color: #5cb85c}.msg.S h4{color: #5cb85c}"
								  // lists
								  "dt{font-weight:bold}dd{margin:0;padding:0 0 0.5em 0;min-height:12px}"
								  "td{vertical-align: top;}"
								  ".h{display:none}"
								  "button{transition: 0s opacity;transition-delay: 3s;transition-duration: 0s;cursor: pointer}"
								  "button.D{background-color:#dc3630}"
								  "button:active{opacity:50% !important;cursor:wait;transition-delay: 0s}"
								  // invert
								  "body.invert,body.invert a,body.invert h1 {background-color:#060606;color:#fff;}"
								  "body.invert .msg{color:#fff;background-color:#282828;border-top:1px solid #555;border-right:1px solid #555;border-bottom:1px solid #555;}"
								  "body.invert .q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
								  ":disabled {opacity: 0.5;}"
								  "</style>";

#ifndef WM_NOHELP
const char HTTP_HELP[] PROGMEM =
	"<br/><h3>Available pages</h3><hr>"
	"<table class='table'>"
	"<thead><tr><th>Page</th><th>Function</th></tr></thead><tbody>"
	"<tr><td><a href='/'>/</a></td>"
	"<td>Menu page.</td></tr>"
	"<tr><td><a href='/wifi'>/wifi</a></td>"
	"<td>Show WiFi scan results and enter WiFi configuration.(/0wifi noscan)</td></tr>"
	"<tr><td><a href='/wifisave'>/wifisave</a></td>"
	"<td>Save WiFi configuration information and configure device. Needs variables supplied.</td></tr>"
	"<tr><td><a href='/param'>/param</a></td>"
	"<td>Parameter page</td></tr>"
	"<tr><td><a href='/info'>/info</a></td>"
	"<td>Information page</td></tr>"
	"<tr><td><a href='/u'>/u</a></td>"
	"<td>OTA Update</td></tr>"
	"<tr><td><a href='/close'>/close</a></td>"
	"<td>Close the captiveportal popup, config portal will remain active</td></tr>"
	"<tr><td>/exit</td>"
	"<td>Exit Config portal, config portal will close</td></tr>"
	"<tr><td>/restart</td>"
	"<td>Reboot the device</td></tr>"
	"<tr><td>/erase</td>"
	"<td>Erase WiFi configuration and reboot device. Device will not reconnect to a network until new WiFi configuration data is entered.</td></tr>"
	"</table>"
	"<p/>Github <a href='https://github.com/tzapu/WiFiManager'>https://github.com/tzapu/WiFiManager</a>.";
#else
const char HTTP_HELP[] PROGMEM = "";
#endif

const char HTTP_UPDATE[] PROGMEM = "Upload new firmware<br/><form method='POST' action='u' enctype='multipart/form-data' onchange=\"(function(el){document.getElementById('uploadbin').style.display = el.value=='' ? 'none' : 'initial';})(this)\"><input type='file' name='update' accept='.bin,application/octet-stream'><button id='uploadbin' type='submit' class='h D'>Update</button></form><small><a href='http://192.168.4.1/update' target='_blank'>* May not function inside captive portal, open in browser http://192.168.4.1</a><small>";
const char HTTP_UPDATE_FAIL[] PROGMEM = "<div class='msg D'><strong>Update failed!</strong><Br/>Reboot device and try again</div>";
const char HTTP_UPDATE_SUCCESS[] PROGMEM = "<div class='msg S'><strong>Update successful.  </strong> <br/> Device rebooting now...</div>";

#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM =
	"<script>function postAjax(url, data, success) {"
	"    var params = typeof data == 'string' ? data : Object.keys(data).map("
	"            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
	"        ).join('&');"
	"    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
	"    xhr.open('POST', url);"
	"    xhr.onreadystatechange = function() {"
	"        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
	"    };"
	"    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
	"    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
	"    xhr.send(params);"
	"    return xhr;}"
	"postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
	"postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
	"</script>";
#endif

// Info html
// @todo remove html elements from progmem, repetetive strings
#ifdef ESP32
const char HTTP_INFO_esphead[] PROGMEM = "<h3>esp32</h3><hr><dl>";
const char HTTP_INFO_chiprev[] PROGMEM = "<dt>Chip rev</dt><dd>{1}</dd>";
const char HTTP_INFO_lastreset[] PROGMEM = "<dt>Last reset reason</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
const char HTTP_INFO_aphost[] PROGMEM = "<dt>Access point hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_psrsize[] PROGMEM = "<dt>PSRAM Size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_temp[] PROGMEM = "<dt>Temperature</dt><dd>{1} C&deg; / {2} F&deg;</dd>";
const char HTTP_INFO_hall[] PROGMEM = "<dt>Hall</dt><dd>{1}</dd>";
#else
const char HTTP_INFO_esphead[] PROGMEM = "<h3>esp8266</h3><hr><dl>";
const char HTTP_INFO_fchipid[] PROGMEM = "<dt>Flash chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_corever[] PROGMEM = "<dt>Core version</dt><dd>{1}</dd>";
const char HTTP_INFO_bootver[] PROGMEM = "<dt>Boot version</dt><dd>{1}</dd>";
const char HTTP_INFO_lastreset[] PROGMEM = "<dt>Last reset reason</dt><dd>{1}</dd>";
const char HTTP_INFO_flashsize[] PROGMEM = "<dt>Real flash size</dt><dd>{1} bytes</dd>";
#endif

const char HTTP_INFO_memsmeter[] PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
const char HTTP_INFO_memsketch[] PROGMEM = "<dt>Memory - Sketch size</dt><dd>Used / Total bytes<br/>{1} / {2}";
const char HTTP_INFO_freeheap[] PROGMEM = "<dt>Memory - Free heap</dt><dd>{1} bytes available</dd>";
const char HTTP_INFO_wifihead[] PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[] PROGMEM = "<dt>Uptime</dt><dd>{1} mins {2} secs</dd>";
const char HTTP_INFO_chipid[] PROGMEM = "<dt>Chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[] PROGMEM = "<dt>Flash size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_sdkver[] PROGMEM = "<dt>SDK version</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[] PROGMEM = "<dt>CPU frequency</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[] PROGMEM = "<dt>Access point IP</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[] PROGMEM = "<dt>Access point MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[] PROGMEM = "<dt>Access point SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[] PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_stassid[] PROGMEM = "<dt>Station SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[] PROGMEM = "<dt>Station IP</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[] PROGMEM = "<dt>Station gateway</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[] PROGMEM = "<dt>Station subnet</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[] PROGMEM = "<dt>DNS Server</dt><dd>{1}</dd>";
const char HTTP_INFO_host[] PROGMEM = "<dt>Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[] PROGMEM = "<dt>Station MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[] PROGMEM = "<dt>Connected</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[] PROGMEM = "<dt>Autoconnect</dt><dd>{1}</dd>";

const char HTTP_INFO_aboutver[] PROGMEM = "<dt>CredoSense Captive Portal</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutarduino[] PROGMEM = "<dt>Arduino</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutsdk[] PROGMEM = "<dt>ESP-SDK/IDF</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutdate[] PROGMEM = "<dt>Build date</dt><dd>{1}</dd>";

const char S_brand[] PROGMEM = "CredoSense";
const char S_debugPrefix[] PROGMEM = "*wm:";
const char S_y[] PROGMEM = "Yes";
const char S_n[] PROGMEM = "No";
const char S_enable[] PROGMEM = "Enabled";
const char S_disable[] PROGMEM = "Disabled";
const char S_GET[] PROGMEM = "GET";
const char S_POST[] PROGMEM = "POST";
const char S_NA[] PROGMEM = "Unknown";
const char S_passph[] PROGMEM = "********";
const char S_titlewifisaved[] PROGMEM = "Credentials saved";
const char S_titlewifisettings[] PROGMEM = "Settings saved";
const char S_titlewifi[] PROGMEM = "Config WiFi";
const char S_titleinfo[] PROGMEM = "Info";
const char S_titlelive[] PROGMEM = "live";
const char S_titlesdata[] PROGMEM = "sdata";
const char S_titlestorage[] PROGMEM = "storage";
const char S_titlefupload[] PROGMEM = "fupload";
const char S_titleparam[] PROGMEM = "Setup";
const char S_titleparamsaved[] PROGMEM = "Setup saved";
const char S_titleexit[] PROGMEM = "Exit";
const char S_titlereset[] PROGMEM = "Reset";
const char S_titleerase[] PROGMEM = "Erase";
const char S_titleclose[] PROGMEM = "Close";
const char S_options[] PROGMEM = "options";
const char S_nonetworks[] PROGMEM = "No networks found. Refresh to scan again.";
const char S_staticip[] PROGMEM = "Static IP";
const char S_staticgw[] PROGMEM = "Static gateway";
const char S_staticdns[] PROGMEM = "Static DNS";
const char S_subnet[] PROGMEM = "Subnet";
const char S_exiting[] PROGMEM = "Exiting";
const char S_resetting[] PROGMEM = "Module will reset in a few seconds.";
const char S_closing[] PROGMEM = "You can close the page, portal will continue to run";
const char S_error[] PROGMEM = "An error occured";
const char S_notfound[] PROGMEM = "File not found\n\n";
const char S_uri[] PROGMEM = "URI: ";
const char S_method[] PROGMEM = "\nMethod: ";
const char S_args[] PROGMEM = "\nArguments: ";
const char S_parampre[] PROGMEM = "param_";

// debug strings
const char D_HR[] PROGMEM = "--------------------";

// softap ssid default prefix
#ifdef ESP8266
const char S_ssidpre[] PROGMEM = "ESP";
#elif defined(ESP32)
const char S_ssidpre[] PROGMEM = "ESP32";
#else
const char S_ssidpre[] PROGMEM = "WM";
#endif

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

#endif
