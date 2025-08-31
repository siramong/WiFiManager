/*
 * wm_strings_es_nibo.h
 * Spanish strings for WiFiManager - Nibo Robot Edition
 * Modernized UI/UX for ESP32/ESP8266 WiFi configuration (Nibo Robot)
 * Cambios solicitados:
 *  - Paleta: Principal #0E1121, Acento #124BAF (contraste de textos ajustado)
 *  - Eliminar botón/flujo de actualización de firmware (OTA) y "Salir"
 *  - Corregir layout: "Buscar redes nuevamente" y "Sin Configuración" en columna (no lado a lado)
 *  - En Información del robot: mostrar solo Tiempo Conectado e IP del robot
 *
 * Para compilar: -DWM_STRINGS_FILE="\"wm_strings_es_nibo.h\""
 */

#ifndef _WM_STRINGS_EN_H_
#define _WM_STRINGS_EN_H_

#ifndef WIFI_MANAGER_OVERRIDE_STRINGS

#include "wm_consts_en.h" // tokens, rutas, etc.

// Idioma i18n
const char WM_LANGUAGE[] PROGMEM = "es-ES";

// ====== <head> ======
const char HTTP_HEAD_START[] PROGMEM = "<!DOCTYPE html>"
"<html lang='es'><head>"
"<meta name='format-detection' content='telephone=no'>"
"<meta charset='UTF-8'>"
"<meta name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/>"
"<title>Nibo Robot - {v}</title>"
"<link href='https://fonts.googleapis.com/css2?family=Inter:wght@300;400;500;600;700&display=swap' rel='stylesheet'>";

const char HTTP_SCRIPT[] PROGMEM = "<script>function c(l){"
"document.getElementById('s').value=l.getAttribute('data-ssid')||l.innerText||l.textContent;"
"var p = l.nextElementSibling && l.nextElementSibling.classList && l.nextElementSibling.classList.contains('l');"
"document.getElementById('p').disabled = !p;"
"if(p)document.getElementById('p').focus();};"
"function f(){var x=document.getElementById('p');x.type==='password'?x.type='text':x.type='password';}"
"function showLoader(btn){btn.innerHTML='<span class=\\"loader\\"></span>Conectando...';btn.disabled=true;}"
"</script>";

const char HTTP_HEAD_END[] PROGMEM = "</head><body class='{c}'><div class='container'>"; // {c} = _bodyclass

// ====== Header visual con logo ======
const char HTTP_ROOT_MAIN[] PROGMEM = 
"<div class='header'>"
"<div class='logo-container'>"
"<div class='nibo-logo'>"
"<svg width='60' height='60' viewBox='0 0 60 60' fill='none' aria-label='Nibo Logo'>"
"<circle cx='30' cy='30' r='25' fill='#124BAF' stroke='#0E1121' stroke-width='2'/>"
"<circle cx='22' cy='25' r='3' fill='white'/>"
"<circle cx='38' cy='25' r='3' fill='white'/>"
"<path d='M20 35 Q30 42 40 35' stroke='white' stroke-width='2' fill='none'/>"
"<text x='30' y='50' text-anchor='middle' fill='#124BAF' font-size='8' font-weight='600'>NIBO</text>"
"</svg>"
"</div>"
"</div>"
"<h1 class='main-title'>{t}</h1>"
"<p class='subtitle'>Configuración WiFi del Robot</p>"
"</div>";

// ====== Menú principal ======
// Orden: WIFI, WIFINOSCAN, INFO, PARAM, CLOSE, RESTART, (EXIT eliminado), ERASE, (UPDATE eliminado), SEP
const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<div class='menu-item'><form action='/wifi' method='get'><button class='btn btn-primary'><span class='icon'>📶</span>Configurar WiFi</button></form></div>", // MENU_WIFI
"<div class='menu-item'><form action='/0wifi' method='get'><button class='btn btn-secondary'><span class='icon'>🔧</span>WiFi Manual</button></form></div>", // MENU_WIFINOSCAN
"<div class='menu-item'><form action='/info' method='get'><button class='btn btn-info'><span class='icon'>ℹ️</span>Información del Robot</button></form></div>", // MENU_INFO
"<div class='menu-item'><form action='/param' method='get'><button class='btn btn-secondary'><span class='icon'>⚙️</span>Configuración Avanzada</button></form></div>", // MENU_PARAM
"<div class='menu-item'><form action='/close' method='get'><button class='btn btn-outline'><span class='icon'>✖️</span>Cerrar Portal</button></form></div>", // MENU_CLOSE (conservar segun flujo WM)
"<div class='menu-item'><form action='/restart' method='get'><button class='btn btn-warning'><span class='icon'>🔄</span>Reiniciar Robot</button></form></div>", // MENU_RESTART
"", // MENU_EXIT -> Eliminado (no mostrar boton Salir)
"<div class='menu-item'><form action='/erase' method='get'><button class='btn btn-danger'><span class='icon'>🗑️</span>Borrar Configuración</button></form></div>", // MENU_ERASE
"", // MENU_UPDATE -> Eliminado (no OTA)
"<div class='separator'></div>" // MENU_SEP
};

const char HTTP_PORTAL_OPTIONS[] PROGMEM = "";

// ====== Listado WiFi ======
const char HTTP_ITEM_QI[] PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='signal-strength q-{q} {i} {h}'></div>"; // icono señal
const char HTTP_ITEM_QP[] PROGMEM = "<div class='signal-percent {h}'>{r}%</div>"; // porcentaje señal
const char HTTP_ITEM[] PROGMEM = "<div class='wifi-item'><a href='#p' onclick='c(this)' data-ssid='{V}' class='wifi-link'><div class='wifi-info'><div class='wifi-name'>{v}</div><div class='wifi-security'>{e}</div></div><div class='wifi-signal'>{qi}{qp}</div></a></div>";

// ====== Formulario WiFi ======
const char HTTP_FORM_START[] PROGMEM = "<div class='form-container'><form method='POST' action='{v}' class='wifi-form'>";
const char HTTP_FORM_WIFI[] PROGMEM = 
"<div class='input-group'>"
"<label for='s' class='input-label'>Nombre de Red (SSID)</label>"
"<input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}' class='input-field'>"
"</div>"
"<div class='input-group'>"
"<label for='p' class='input-label'>Contraseña</label>"
"<div class='password-container'>"
"<input id='p' name='p' maxlength='64' type='password' placeholder='Ingresa la contraseña WiFi' class='input-field password-input'>"
"<button type='button' onclick='f()' class='password-toggle' aria-label='Mostrar/ocultar contraseña'>👁️</button>"
"</div>"
"</div>";

const char HTTP_FORM_WIFI_END[] PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<div class='advanced-section'><h3>Configuración IP Estática (Opcional)</h3>";
const char HTTP_FORM_END[] PROGMEM = 
"</div><div class='form-actions'>"
"<button type='submit' class='btn btn-primary btn-large' onclick='showLoader(this)'>"
"<span class='icon'>💾</span>Guardar y Conectar"
"</button>"
"</div></form></div>";

const char HTTP_FORM_LABEL[] PROGMEM = "<label for='{i}' class='input-label'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[] PROGMEM = "<div class='params-section'>";
const char HTTP_FORM_PARAM[] PROGMEM = "<div class='input-group'><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c} class='input-field'></div>";

// ====== Escaneo / Estado (fix: en columna, no lado a lado) ======
const char HTTP_SCAN_LINK[] PROGMEM = "<div class='scan-section'><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1' class='btn btn-outline'><span class='icon'>🔄</span>Buscar Redes Nuevamente</button></form></div>";

const char HTTP_SAVED[] PROGMEM = 
"<div class='status-message success'>"
"<div class='status-icon'>✅</div>"
"<h3>¡Configuración Guardada!</h3>"
"<p>Nibo se está conectando a la red WiFi.<br/>Si la conexión falla, vuelve a conectarte al punto de acceso para intentar de nuevo.</p>"
"<div class='loading-animation'><div class='spinner'></div></div>"
"</div>";

const char HTTP_PARAMSAVED[] PROGMEM = 
"<div class='status-message success'>"
"<div class='status-icon'>✅</div>"
"<h3>Configuración Guardada</h3>"
"</div>";

const char HTTP_END[] PROGMEM = "</div></body></html>";

const char HTTP_ERASEBTN[] PROGMEM = 
"<div class='danger-zone'>"
"<h3>⚠️ Zona de Peligro</h3>"
"<form action='/erase' method='get'>"
"<button class='btn btn-danger'>🗑️ Borrar Configuración WiFi</button>"
"</form>"
"</div>";

// ====== Eliminados: botones/plantillas de UPDATE (OTA) y SALIR ======
const char HTTP_UPDATEBTN[] PROGMEM = "";
const char HTTP_UPDATE[] PROGMEM = "";
const char HTTP_UPDATE_FAIL[] PROGMEM = "";
const char HTTP_UPDATE_SUCCESS[] PROGMEM = "";

const char HTTP_BACKBTN[] PROGMEM = 
"<div class='navigation'>"
"<form action='/' method='get'>"
"<button class='btn btn-outline'>← Volver al Menú Principal</button>"
"</form>"
"</div>";

// ====== Estados de conexión ======
const char HTTP_STATUS_ON[] PROGMEM = 
"<div class='status-message success'>"
"<div class='status-icon'>✅</div>"
"<h3>Conectado Exitosamente</h3>"
"<p><strong>Red:</strong> {v}<br/><strong>Dirección IP:</strong> {i}</p>"
"</div>";

const char HTTP_STATUS_OFF[] PROGMEM = 
"<div class='status-message error'>"
"<div class='status-icon'>❌</div>"
"<h3>No Conectado</h3>"
"<p><strong>Red intentada:</strong> {v}{r}</p>"
"</div>";

const char HTTP_STATUS_OFFPW[] PROGMEM = "<br/><strong>Error:</strong> Contraseña incorrecta";
const char HTTP_STATUS_OFFNOAP[] PROGMEM = "<br/><strong>Error:</strong> Red no encontrada";
const char HTTP_STATUS_OFFFAIL[] PROGMEM = "<br/><strong>Error:</strong> No se pudo establecer conexión";

// Fix visual: bloque completo y separado del botón de escaneo
const char HTTP_STATUS_NONE[] PROGMEM = 
"<div class='status-message info'>"
"<div class='status-icon'>ℹ️</div>"
"<h3>Sin Configuración</h3>"
"<p>No hay ninguna red WiFi configurada</p>"
"</div>";

const char HTTP_BR[] PROGMEM = "<br/>";

// ====== Estilos (tema oscuro #0E1121 con acento #124BAF) ======
const char HTTP_STYLE[] PROGMEM = "<style>"
"*{margin:0;padding:0;box-sizing:border-box}"
"body{font-family:'Inter',-apple-system,BlinkMacSystemFont,'Segoe UI',Roboto,sans-serif;background:#0E1121;min-height:100vh;display:flex;align-items:center;justify-content:center;color:#e5e7eb;line-height:1.6}"
".container{background:rgba(16,19,37,.96);backdrop-filter:blur(8px);border-radius:20px;box-shadow:0 25px 50px rgba(0,0,0,.3);padding:2rem;max-width:520px;width:92%;margin:1rem;color:#f3f4f6}"
".header{text-align:center;margin-bottom:1.5rem;padding-bottom:1rem;border-bottom:1px solid rgba(18,75,175,.35)}"
".nibo-logo{display:inline-block;animation:float 3s ease-in-out infinite}"
"@keyframes float{0%,100%{transform:translateY(0)}50%{transform:translateY(-8px)}}"
".main-title{font-size:1.8rem;font-weight:800;color:#f9fafb;margin:.25rem 0}"
".subtitle{color:rgba(255,255,255,.7);font-size:.95rem}"
".menu-item{margin-bottom:.75rem}"
".btn{width:100%;padding:.875rem 1.25rem;border:none;border-radius:12px;font-size:.95rem;font-weight:600;cursor:pointer;transition:transform .15s ease,box-shadow .15s ease;display:flex;align-items:center;justify-content:center;gap:.5rem}"
".btn-primary{background:#124BAF;color:#fff;box-shadow:0 4px 14px rgba(18,75,175,.35)}"
".btn-primary:hover{transform:translateY(-1px);box-shadow:0 8px 20px rgba(18,75,175,.5)}"
".btn-secondary{background:#475569;color:#fff}"
".btn-info{background:#0891b2;color:#fff}"
".btn-warning{background:#d97706;color:#fff}"
".btn-danger{background:#dc2626;color:#fff}"
".btn-outline{background:transparent;color:#e5e7eb;border:1px solid rgba(18,75,175,.6)}"
".btn-outline:hover{background:rgba(18,75,175,.15);border-color:#124BAF}"
".separator{height:1px;background:rgba(18,75,175,.35);margin:1rem 0}"
".wifi-item{background:rgba(18,75,175,.08);border:1px solid rgba(18,75,175,.35);border-radius:12px;margin-bottom:.5rem;overflow:hidden}"
".wifi-link{display:flex;justify-content:space-between;align-items:center;padding:1rem;color:#f3f4f6;text-decoration:none}"
".wifi-item:hover{background:rgba(18,75,175,.15);border-color:rgba(18,75,175,.6)}"
".wifi-name{font-weight:700;color:#fff}"
".wifi-security{font-size:.82rem;color:rgba(255,255,255,.7)}"
".signal-strength{width:20px;height:20px;background:#374151;border-radius:3px}"
".q-4{background:#10b981!important}.q-3{background:#59a14f!important}.q-2{background:#fbbf24!important}.q-1{background:#f87171!important}.q-0{background:#6b7280!important}"
".form-container{margin-top:1.25rem}"
".input-group{margin-bottom:1.1rem}"
".input-label{display:block;font-weight:600;color:#e5e7eb;margin-bottom:.45rem}"
".input-field{width:100%;padding:.875rem 1rem;border:1px solid rgba(18,75,175,.5);border-radius:10px;font-size:.95rem;background:rgba(14,17,33,.92);color:#fff;transition:box-shadow .15s ease,border-color .15s ease}"
".input-field:focus{outline:none;border-color:#124BAF;box-shadow:0 0 0 3px rgba(18,75,175,.25)}"
".password-container{position:relative}"
".password-toggle{position:absolute;right:.75rem;top:50%;transform:translateY(-50%);background:none;border:none;cursor:pointer;font-size:1rem;opacity:.7}"
".password-toggle:hover{opacity:1}"
".status-message{padding:1.1rem;border-radius:12px;margin:1rem 0;text-align:center;width:100%;display:block}"
".status-message.success{background:rgba(16,185,129,.12);border:1px solid rgba(16,185,129,.35);color:#d1fae5}"
".status-message.error{background:rgba(239,68,68,.12);border:1px solid rgba(239,68,68,.35);color:#fee2e2}"
".status-message.info{background:rgba(18,75,175,.12);border:1px solid rgba(18,75,175,.35);color:#c7d2fe}"
".scan-section{display:block;width:100%;margin:1rem 0}"
".loading-animation{margin-top:1rem}.spinner{width:24px;height:24px;border:2px solid rgba(255,255,255,.2);border-top:2px solid #fff;border-radius:50%;animation:spin 1s linear infinite;display:inline-block}"
"@keyframes spin{0%{transform:rotate(0)}100%{transform:rotate(360deg)}}"
".danger-zone{margin-top:1.5rem;padding:1.25rem;background:rgba(239,68,68,.06);border:1px solid rgba(239,68,68,.25);border-radius:12px}"
".danger-zone h3{color:#fecaca;margin-bottom:.75rem;text-align:center}"
".advanced-section{margin-top:1.25rem;padding-top:1.25rem;border-top:1px solid rgba(156,163,175,.25)}"
".advanced-section h3{color:#e5e7eb;font-size:1.05rem;margin-bottom:.75rem}"
".navigation{margin-top:1rem;text-align:center}"
"@media(max-width:480px){.container{padding:1.25rem;margin:.5rem}.main-title{font-size:1.55rem}.btn{padding:.8rem 1rem;font-size:.92rem}}"
"body.invert{background:linear-gradient(135deg,#1f2937 0%,#111827 100%)}"
"body.invert .container{background:rgba(31,41,55,.95);color:#f9fafb}"
"body.invert .main-title{color:#f9fafb}"
"body.invert .input-field{background:rgba(55,65,81,.9);color:#f9fafb;border-color:rgba(75,85,99,.5)}"
":disabled{opacity:.55;cursor:not-allowed}"
"</style>";

// ====== Ayuda (sin /update) ======
#ifndef WM_NOHELP
const char HTTP_HELP[] PROGMEM =
 "<div class='help-section'>"
 "<h3>📚 Páginas Disponibles</h3>"
 "<div class='help-table'>"
 "<div class='help-item'><strong>/</strong> - Página principal del menú</div>"
 "<div class='help-item'><strong>/wifi</strong> - Escanear y configurar WiFi</div>"
 "<div class='help-item'><strong>/info</strong> - Información del robot</div>"
 "<div class='help-item'><strong>/param</strong> - Configuración de parámetros</div>"
 "<div class='help-item'><strong>/restart</strong> - Reiniciar dispositivo</div>"
 "<div class='help-item'><strong>/erase</strong> - Borrar configuración WiFi</div>"
 "</div>"
 "<p style='text-align:center;margin-top:1rem;'>"
 "🤖 <strong>Nibo Robot</strong> - Powered by WiFiManager"
 "</p>"
 "</div>";
#else
const char HTTP_HELP[] PROGMEM = "";
#endif

// ====== Información (solo Tiempo conectado + IP del robot) ======
#ifdef ESP32
const char HTTP_INFO_esphead[] PROGMEM = "<div class='info-section'><h3>🤖 Información del Robot Nibo</h3>";
#else
const char HTTP_INFO_esphead[] PROGMEM = "<div class='info-section'><h3>🔧 Información del Dispositivo</h3>";
#endif

// Dejar vacías las secciones que no queremos mostrar (compatibilidad con generador WM)
const char HTTP_INFO_chiprev[]    PROGMEM = "";
const char HTTP_INFO_lastreset[]  PROGMEM = "";
const char HTTP_INFO_aphost[]     PROGMEM = "";
const char HTTP_INFO_psrsize[]    PROGMEM = "";
const char HTTP_INFO_temp[]       PROGMEM = "";
const char HTTP_INFO_fchipid[]    PROGMEM = "";
const char HTTP_INFO_corever[]    PROGMEM = "";
const char HTTP_INFO_bootver[]    PROGMEM = "";
const char HTTP_INFO_flashsize[]  PROGMEM = "";

// Indicadores de memoria (ocultos)
const char HTTP_INFO_memsmeter[]  PROGMEM = "";
const char HTTP_INFO_memsketch[]  PROGMEM = "";
const char HTTP_INFO_freeheap[]   PROGMEM = "";

// Encabezado WiFi info (opcional)
const char HTTP_INFO_wifihead[] PROGMEM = "</div><div class='info-section'><h3>📶 Estado de Conexión</h3>";

// Mostrar ÚNICAMENTE tiempo conectado e IP
// {1} Min {2} Seg
const char HTTP_INFO_uptime[] PROGMEM = "<div class='info-item'><span class='info-label'>Tiempo Conectado:</span><span class='info-value'>{1} Min {2} Seg</span></div>";

// IP: preferimos IP de estación; si no, IP del AP. Dejamos ambos con el mismo rótulo y el generador incluirá el vigente.
const char HTTP_INFO_apip[]  PROGMEM = "<div class='info-item'><span class='info-label'>IP del Robot:</span><span class='info-value'>{1}</span></div>";
const char HTTP_INFO_staip[] PROGMEM = "<div class='info-item'><span class='info-label'>IP del Robot:</span><span class='info-value'>{1}</span></div>";

// Todo lo demás vacío para no mostrar
const char HTTP_INFO_chipid[]  PROGMEM = "";
const char HTTP_INFO_idesize[] PROGMEM = "";
const char HTTP_INFO_sdkver[]  PROGMEM = "";
const char HTTP_INFO_cpufreq[] PROGMEM = "";
const char HTTP_INFO_apmac[]   PROGMEM = "";
const char HTTP_INFO_apssid[]  PROGMEM = "";
const char HTTP_INFO_apbssid[] PROGMEM = "";
const char HTTP_INFO_stassid[] PROGMEM = "";
const char HTTP_INFO_stagw[]   PROGMEM = "";
const char HTTP_INFO_stasub[]  PROGMEM = "";
const char HTTP_INFO_dnss[]    PROGMEM = "";
const char HTTP_INFO_host[]    PROGMEM = "";
const char HTTP_INFO_stamac[]  PROGMEM = "";
const char HTTP_INFO_conx[]    PROGMEM = "";
const char HTTP_INFO_autoconx[] PROGMEM = "";

// Sobre/Acerca de (vacío para ocultar)
const char HTTP_INFO_aboutver[]    PROGMEM = "";
const char HTTP_INFO_aboutarduino[] PROGMEM = "";
const char HTTP_INFO_aboutsdk[]     PROGMEM = "";
const char HTTP_INFO_aboutdate[]    PROGMEM = "";

// ====== Textos / Labels ======
const char S_brand[] PROGMEM = "Nibo Robot";
const char S_debugPrefix[] PROGMEM = "*nibo:";
const char S_y[] PROGMEM = "Sí";
const char S_n[] PROGMEM = "No";
const char S_enable[] PROGMEM = "Habilitado";
const char S_disable[] PROGMEM = "Deshabilitado";
const char S_GET[] PROGMEM = "GET";
const char S_POST[] PROGMEM = "POST";
const char S_NA[] PROGMEM = "N/A";
const char S_passph[] PROGMEM = "••••••••";
const char S_titlewifisaved[] PROGMEM = "WiFi Configurado";
const char S_titlewifisettings[] PROGMEM = "Configuración Guardada";
const char S_titlewifi[] PROGMEM = "Configurar Nibo";
const char S_titleinfo[] PROGMEM = "Información del Robot";
const char S_titleparam[] PROGMEM = "Configuración Avanzada";
const char S_titleparamsaved[] PROGMEM = "Configuración Guardada";
const char S_titleexit[] PROGMEM = "Salir"; // no usado
const char S_titlereset[] PROGMEM = "Reiniciar";
const char S_titleerase[] PROGMEM = "Borrar Configuración";
const char S_titleclose[] PROGMEM = "Cerrar Portal";
const char S_options[] PROGMEM = "opciones";
const char S_nonetworks[] PROGMEM = "No se encontraron redes WiFi. Presiona 'Buscar' para escanear nuevamente.";
const char S_staticip[] PROGMEM = "IP Estática";
const char S_staticgw[] PROGMEM = "Gateway Estático";
const char S_staticdns[] PROGMEM = "DNS Estático";
const char S_subnet[] PROGMEM = "Máscara de Subred";
const char S_exiting[] PROGMEM = "Saliendo del portal de configuración...";
const char S_resetting[] PROGMEM = "El robot Nibo se reiniciará en unos segundos.";
const char S_closing[] PROGMEM = "Puedes cerrar esta página, el portal seguirá funcionando";
const char S_error[] PROGMEM = "Ha Ocurrido un Error";
const char S_notfound[] PROGMEM = "Archivo No Encontrado

";
const char S_uri[] PROGMEM = "URI: ";
const char S_method[] PROGMEM = "
Método: ";
const char S_args[] PROGMEM = "
Argumentos: ";
const char S_parampre[] PROGMEM = "param_";

// Debug
const char D_HR[] PROGMEM = "--------------------";

// Prefijo SSID por defecto
#ifdef ESP8266
    const char S_ssidpre[] PROGMEM = "Nibo-ESP";
#elif defined(ESP32)
    const char S_ssidpre[] PROGMEM = "Nibo-Robot";
#else
    const char S_ssidpre[] PROGMEM = "Nibo-WM";
#endif

// ====== JS opcional de test ======
#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM =
"<script>"
"function postAjax(url,data,success){var params=typeof data=='string'?data:Object.keys(data).map(function(k){return encodeURIComponent(k)+'='+encodeURIComponent(data[k])}).join('&');var xhr=window.XMLHttpRequest?new XMLHttpRequest():new ActiveXObject('Microsoft.XMLHTTP');xhr.open('POST',url);xhr.onreadystatechange=function(){if(xhr.readyState>3&&xhr.status==200){success(xhr.responseText);}};xhr.setRequestHeader('X-Requested-With','XMLHttpRequest');xhr.setRequestHeader('Content-Type','application/x-www-form-urlencoded');xhr.send(params);return xhr;}"
"function checkConnectionStatus(){postAjax('/status','',function(data){console.log('Estado de conexión:',data);});}"
"if(window.location.pathname==='/wifi'){setInterval(checkConnectionStatus,5000);}"
"</script>";
#endif

// ====== END WIFI_MANAGER_OVERRIDE_STRINGS ======
#endif

#endif // _WM_STRINGS_EN_H_
