/**
 * wm_strings_es_nibo.h
 * Spanish strings for WiFiManager - Nibo Robot Edition
 * Modernized UI/UX for ESP32-CAM WiFi configuration
 * 
 * @author Original: tzapu, tablatronix
 * @modified-for Nibo Robot Project
 * @version 1.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_EN_H_
#define _WM_STRINGS_EN_H_

/**
 * ADD TO BUILD FLAGS
 * -DWM_STRINGS_FILE="\"wm_strings_es_nibo.h\""
 */

#ifndef WIFI_MANAGER_OVERRIDE_STRINGS

#include "wm_consts_en.h" // include constants, tokens, routes

const char WM_LANGUAGE[] PROGMEM = "es-ES"; // i18n lang code

const char HTTP_HEAD_START[] PROGMEM = "<!DOCTYPE html>"
"<html lang='es'><head>"
"<meta name='format-detection' content='telephone=no'>"
"<meta charset='UTF-8'>"
"<meta name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/>"
"<title>Nibo Robot - {v}</title>"
"<link href='https://fonts.googleapis.com/css2?family=Inter:wght@300;400;500;600;700&display=swap' rel='stylesheet'>";

const char HTTP_SCRIPT[] PROGMEM = "<script>function c(l){"
"document.getElementById('s').value=l.getAttribute('data-ssid')||l.innerText||l.textContent;"
"p = l.nextElementSibling.classList.contains('l');"
"document.getElementById('p').disabled = !p;"
"if(p)document.getElementById('p').focus();};"
"function f() {var x = document.getElementById('p');x.type==='password'?x.type='text':x.type='password';}"
"function showLoader(btn) {btn.innerHTML='<span class=\"loader\"></span>Conectando...';btn.disabled=true;}"
"</script>";

const char HTTP_HEAD_END[] PROGMEM = "</head><body class='{c}'><div class='container'>"; // {c} = _bodyclass

// Logo y header principal - AQUÍ PUEDES CAMBIAR EL LOGO
const char HTTP_ROOT_MAIN[] PROGMEM = 
"<div class='header'>"
"<div class='logo-container'>"
"<!-- Reemplaza esta sección con tu logo de Nibo -->"
"<div class='nibo-logo'>"
"<svg width='60' height='60' viewBox='0 0 60 60' fill='none'>"
"<circle cx='30' cy='30' r='25' fill='#124BAF' stroke='#0E1121' stroke-width='2'/>"
"<circle cx='22' cy='25' r='3' fill='white'/>"
"<circle cx='38' cy='25' r='3' fill='white'/>"
"<path d='M20 35 Q30 42 40 35' stroke='white' stroke-width='2' fill='none'/>"
"<text x='30' y='50' text-anchor='middle' fill='#124BAF' font-size='8' font-weight='600'>NIBO</text>"
"</svg>"
"</div>"
"<!-- Fin del logo -->"
"</div>"
"<h1 class='main-title'>{t}</h1>"
"<p class='subtitle'>Configuración WiFi del Robot</p>"
"</div>";

const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<div class='menu-item'><form action='/wifi' method='get'><button class='btn btn-primary'><span class='icon'>📶</span>Configurar WiFi</button></form></div>", // MENU_WIFI
"<div class='menu-item'><form action='/0wifi' method='get'><button class='btn btn-secondary'><span class='icon'>🔧</span>WiFi Manual</button></form></div>", // MENU_WIFINOSCAN
"<div class='menu-item'><form action='/info' method='get'><button class='btn btn-info'><span class='icon'>ℹ️</span>Información del Sistema</button></form></div>", // MENU_INFO
"<div class='menu-item'><form action='/param' method='get'><button class='btn btn-secondary'><span class='icon'>⚙️</span>Configuración Avanzada</button></form></div>",//MENU_PARAM
"", // MENU_CLOSE - Eliminado
"<div class='menu-item'><form action='/restart' method='get'><button class='btn btn-warning'><span class='icon'>🔄</span>Reiniciar Robot</button></form></div>",// MENU_RESTART
"", // MENU_EXIT - Eliminado
"<div class='menu-item'><form action='/erase' method='get'><button class='btn btn-danger'><span class='icon'>🗑️</span>Borrar Configuración</button></form></div>", // MENU_ERASE
"", // MENU_UPDATE - Eliminado
"<div class='separator'></div>" // MENU_SEP
};

const char HTTP_PORTAL_OPTIONS[] PROGMEM = "";
const char HTTP_ITEM_QI[] PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='signal-strength q-{q} {i} {h}'></div>"; // rssi icons
const char HTTP_ITEM_QP[] PROGMEM = "<div class='signal-percent {h}'>{r}%</div>"; // rssi percentage
const char HTTP_ITEM[] PROGMEM = "<div class='wifi-item'><a href='#p' onclick='c(this)' data-ssid='{V}' class='wifi-link'><div class='wifi-info'><div class='wifi-name'>{v}</div><div class='wifi-security'>{e}</div></div><div class='wifi-signal'>{qi}{qp}</div></a></div>";

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
"<button type='button' onclick='f()' class='password-toggle'>👁️</button>"
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

const char HTTP_SCAN_LINK[] PROGMEM = "<div class='scan-section' style='margin-top: 1rem; text-align: center;'><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1' class='btn btn-outline' style='width: 100%;'><span class='icon'>🔄</span>Buscar Redes Nuevamente</button></form></div>";

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

const char HTTP_UPDATEBTN[] PROGMEM = ""; // Eliminado

const char HTTP_BACKBTN[] PROGMEM = 
"<div class='navigation'>"
"<form action='/' method='get'>"
"<button class='btn btn-outline'>← Volver al Menú Principal</button>"
"</form>"
"</div>";

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
const char HTTP_STATUS_NONE[] PROGMEM = 
"<div class='status-message info'>"
"<div class='status-icon'>ℹ️</div>"
"<h3>Sin Configuración</h3>"
"<p>No hay ninguna red WiFi configurada</p>"
"</div>";

const char HTTP_BR[] PROGMEM = "<br/>";

// CSS MODERNO Y MEJORADO
const char HTTP_STYLE[] PROGMEM = "<style>"
"* { margin: 0; padding: 0; box-sizing: border-box; }"
"body { "
"  font-family: 'Inter', -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, sans-serif;"
"  background: linear-gradient(135deg, #0E1121 0%, #1a1f35 100%);"
"  min-height: 100vh;"
"  display: flex;"
"  align-items: center;"
"  justify-content: center;"
"  color: #ffffff;"
"  line-height: 1.6;"
"}"

".container {"
"  background: rgba(14, 17, 33, 0.95);"
"  backdrop-filter: blur(10px);"
"  border-radius: 20px;"
"  box-shadow: 0 25px 50px rgba(0, 0, 0, 0.3);"
"  padding: 2rem;"
"  max-width: 480px;"
"  width: 90%;"
"  margin: 1rem;"
"  border: 1px solid rgba(18, 75, 175, 0.2);"
"}"

".header {"
"  text-align: center;"
"  margin-bottom: 2rem;"
"  padding-bottom: 1.5rem;"
"  border-bottom: 1px solid rgba(18, 75, 175, 0.3);"
"}"

".logo-container {"
"  margin-bottom: 1rem;"
"}"

".nibo-logo {"
"  display: inline-block;"
"  animation: float 3s ease-in-out infinite;"
"}"

"@keyframes float {"
"  0%, 100% { transform: translateY(0px); }"
"  50% { transform: translateY(-10px); }"
"}"

".main-title {"
"  font-size: 1.8rem;"
"  font-weight: 700;"
"  color: #ffffff;"
"  margin-bottom: 0.5rem;"
"}"

".subtitle {"
"  color: rgba(255, 255, 255, 0.7);"
"  font-size: 0.9rem;"
"  font-weight: 400;"
"}"

".menu-item {"
"  margin-bottom: 0.75rem;"
"}"

".btn {"
"  width: 100%;"
"  padding: 0.875rem 1.25rem;"
"  border: none;"
"  border-radius: 12px;"
"  font-size: 0.95rem;"
"  font-weight: 500;"
"  cursor: pointer;"
"  transition: all 0.2s ease;"
"  display: flex;"
"  align-items: center;"
"  justify-content: center;"
"  gap: 0.5rem;"
"  text-decoration: none;"
"  position: relative;"
"  overflow: hidden;"
"}"

".btn::before {"
"  content: '';"
"  position: absolute;"
"  top: 50%;"
"  left: 50%;"
"  width: 0;"
"  height: 0;"
"  background: rgba(255, 255, 255, 0.1);"
"  border-radius: 50%;"
"  transform: translate(-50%, -50%);"
"  transition: width 0.6s, height 0.6s;"
"}"

".btn:hover::before {"
"  width: 300px;"
"  height: 300px;"
"}"

".btn-primary {"
"  background: linear-gradient(135deg, #124BAF, #0d3a8a);"
"  color: white;"
"  box-shadow: 0 4px 14px rgba(18, 75, 175, 0.4);"
"}"

".btn-primary:hover {"
"  transform: translateY(-2px);"
"  box-shadow: 0 8px 25px rgba(18, 75, 175, 0.5);"
"}"

".btn-secondary {"
"  background: linear-gradient(135deg, #374151, #1f2937);"
"  color: white;"
"  box-shadow: 0 4px 14px rgba(55, 65, 81, 0.3);"
"  border: 1px solid rgba(18, 75, 175, 0.2);"
"}"

".btn-secondary:hover {"
"  transform: translateY(-2px);"
"  box-shadow: 0 8px 25px rgba(55, 65, 81, 0.4);"
"  border-color: rgba(18, 75, 175, 0.4);"
"}"

".btn-info {"
"  background: linear-gradient(135deg, #124BAF, #0891b2);"
"  color: white;"
"  box-shadow: 0 4px 14px rgba(18, 75, 175, 0.3);"
"}"

".btn-warning {"
"  background: linear-gradient(135deg, #f59e0b, #d97706);"
"  color: white;"
"  box-shadow: 0 4px 14px rgba(245, 158, 11, 0.3);"
"}"

".btn-danger {"
"  background: linear-gradient(135deg, #ef4444, #dc2626);"
"  color: white;"
"  box-shadow: 0 4px 14px rgba(239, 68, 68, 0.3);"
"}"

".btn-outline {"
"  background: rgba(14, 17, 33, 0.6);"
"  color: rgba(255, 255, 255, 0.9);"
"  border: 1px solid rgba(18, 75, 175, 0.4);"
"  backdrop-filter: blur(10px);"
"}"

".btn-outline:hover {"
"  background: rgba(18, 75, 175, 0.3);"
"  border-color: #124BAF;"
"  color: #ffffff;"
"}"

".btn-large {"
"  padding: 1.125rem 1.5rem;"
"  font-size: 1.05rem;"
"  font-weight: 600;"
"}"

".icon {"
"  font-size: 1.1em;"
"}"

".separator {"
"  height: 1px;"
"  background: rgba(18, 75, 175, 0.3);"
"  margin: 1rem 0;"
"}"

".wifi-item {"
"  background: rgba(18, 75, 175, 0.1);"
"  border: 1px solid rgba(18, 75, 175, 0.2);"
"  border-radius: 12px;"
"  margin-bottom: 0.5rem;"
"  transition: all 0.2s ease;"
"  overflow: hidden;"
"}"

".wifi-link {"
"  display: flex;"
"  justify-content: space-between;"
"  align-items: center;"
"  padding: 1rem;"
"  color: inherit;"
"  text-decoration: none;"
"  width: 100%;"
"  cursor: pointer;"
"}"

".wifi-item:hover {"
"  background: rgba(18, 75, 175, 0.2);"
"  border-color: rgba(18, 75, 175, 0.4);"
"  transform: translateY(-1px);"
"}"

".wifi-name {"
"  font-weight: 600;"
"  color: #ffffff;"
"}"

".wifi-security {"
"  font-size: 0.8rem;"
"  color: rgba(255, 255, 255, 0.7);"
"}"

".signal-strength {"
"  width: 20px;"
"  height: 20px;"
"  background: #374151;"
"  border-radius: 3px;"
"  position: relative;"
"}"

".q-4 { background: #10b981 !important; }"
".q-3 { background: #59a14f !important; }"
".q-2 { background: #fbbf24 !important; }"
".q-1 { background: #f87171 !important; }"
".q-0 { background: #374151 !important; }"

".form-container {"
"  margin-top: 1.5rem;"
"}"

".input-group {"
"  margin-bottom: 1.25rem;"
"}"

".input-label {"
"  display: block;"
"  font-weight: 500;"
"  color: #ffffff;"
"  margin-bottom: 0.5rem;"
"}"

".input-field {"
"  width: 100%;"
"  padding: 0.875rem 1rem;"
"  border: 1px solid rgba(18, 75, 175, 0.3);"
"  border-radius: 8px;"
"  font-size: 0.95rem;"
"  background: rgba(14, 17, 33, 0.8);"
"  color: #ffffff;"
"  transition: all 0.2s ease;"
"}"

".input-field:focus {"
"  outline: none;"
"  border-color: #124BAF;"
"  box-shadow: 0 0 0 3px rgba(18, 75, 175, 0.2);"
"  background: rgba(14, 17, 33, 0.95);"
"}"

".input-field::placeholder {"
"  color: rgba(255, 255, 255, 0.5);"
"}"

".password-container {"
"  position: relative;"
"}"

".password-toggle {"
"  position: absolute;"
"  right: 0.75rem;"
"  top: 50%;"
"  transform: translateY(-50%);"
"  background: none;"
"  border: none;"
"  cursor: pointer;"
"  font-size: 1rem;"
"  opacity: 0.6;"
"  transition: opacity 0.2s ease;"
"  color: #ffffff;"
"}"

".password-toggle:hover {"
"  opacity: 1;"
"}"

".status-message {"
"  padding: 1.5rem;"
"  border-radius: 12px;"
"  margin: 1rem 0;"
"  text-align: center;"
"  background: rgba(14, 17, 33, 0.8);"
"  border: 1px solid rgba(18, 75, 175, 0.3);"
"}"

".status-message.success {"
"  background: rgba(16, 185, 129, 0.1);"
"  border: 1px solid rgba(16, 185, 129, 0.3);"
"  color: #10b981;"
"}"

".status-message.error {"
"  background: rgba(239, 68, 68, 0.1);"
"  border: 1px solid rgba(239, 68, 68, 0.3);"
"  color: #ef4444;"
"}"

".status-message.info {"
"  background: rgba(18, 75, 175, 0.1);"
"  border: 1px solid rgba(18, 75, 175, 0.3);"
"  color: #124BAF;"
"}"

".status-icon {"
"  font-size: 2rem;"
"  margin-bottom: 0.5rem;"
"}"

".loading-animation {"
"  margin-top: 1rem;"
"}"

".spinner {"
"  width: 24px;"
"  height: 24px;"
"  border: 2px solid rgba(18, 75, 175, 0.2);"
"  border-top: 2px solid #124BAF;"
"  border-radius: 50%;"
"  animation: spin 1s linear infinite;"
"  display: inline-block;"
"}"

"@keyframes spin {"
"  0% { transform: rotate(0deg); }"
"  100% { transform: rotate(360deg); }"
"}"

".loader {"
"  width: 16px;"
"  height: 16px;"
"  border: 2px solid rgba(255, 255, 255, 0.2);"
"  border-top: 2px solid white;"
"  border-radius: 50%;"
"  animation: spin 1s linear infinite;"
"  display: inline-block;"
"  margin-right: 0.5rem;"
"}"

".danger-zone {"
"  margin-top: 2rem;"
"  padding: 1.5rem;"
"  background: rgba(239, 68, 68, 0.05);"
"  border: 1px solid rgba(239, 68, 68, 0.2);"
"  border-radius: 12px;"
"}"

".danger-zone h3 {"
"  color: #ef4444;"
"  margin-bottom: 1rem;"
"  text-align: center;"
"}"

".advanced-section {"
"  margin-top: 1.5rem;"
"  padding-top: 1.5rem;"
"  border-top: 1px solid rgba(18, 75, 175, 0.2);"
"}"

".advanced-section h3 {"
"  color: #ffffff;"
"  font-size: 1.1rem;"
"  margin-bottom: 1rem;"
"}"

".navigation {"
"  margin-top: 1.5rem;"
"  text-align: center;"
"}"

".scan-section {"
"  margin-top: 1rem;"
"  text-align: center;"
"  padding-top: 1rem;"
"  border-top: 1px solid rgba(18, 75, 175, 0.2);"
"}"

"@media (max-width: 480px) {"
"  .container { padding: 1.5rem; margin: 0.5rem; }"
"  .main-title { font-size: 1.5rem; }"
"  .btn { padding: 0.75rem 1rem; font-size: 0.9rem; }"
"}"

"body.invert {"
"  background: linear-gradient(135deg, #0E1121 0%, #1a1f35 100%);"
"}"

"body.invert .container {"
"  background: rgba(14, 17, 33, 0.95);"
"  color: #ffffff;"
"}"

"body.invert .main-title {"
"  color: #ffffff;"
"}"

"body.invert .input-field {"
"  background: rgba(14, 17, 33, 0.8);"
"  color: #ffffff;"
"  border-color: rgba(18, 75, 175, 0.3);"
"}"

":disabled {"
"  opacity: 0.5;"
"  cursor: not-allowed;"
"}"

"</style>";

// Resto de constantes sin cambios significativos
#ifndef WM_NOHELP
const char HTTP_HELP[] PROGMEM =
 "<div class='help-section'>"
 "<h3>📚 Páginas Disponibles</h3>"
 "<div class='help-table'>"
 "<div class='help-item'><strong>/</strong> - Página principal del menú</div>"
 "<div class='help-item'><strong>/wifi</strong> - Escanear y configurar WiFi</div>"
 "<div class='help-item'><strong>/info</strong> - Información del sistema</div>"
 "<div class='help-item'><strong>/param</strong> - Configuración de parámetros</div>"
 "<div class='help-item'><strong>/update</strong> - Actualización OTA</div>"
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

const char HTTP_UPDATE[] PROGMEM = ""; // Eliminado - No se necesita

const char HTTP_UPDATE_FAIL[] PROGMEM = ""; // Eliminado 

const char HTTP_UPDATE_SUCCESS[] PROGMEM = ""; // Eliminado

// Info sections para ESP32
#ifdef ESP32
	const char HTTP_INFO_esphead[] PROGMEM = "<div class='info-section'><h3>Robot Nibo - Informacion</h3>";
	const char HTTP_INFO_chiprev[] PROGMEM = "<div class='info-item'><span class='info-label'>Chip Rev:</span><span class='info-value'>{1}</span></div>";
  	const char HTTP_INFO_lastreset[] PROGMEM = "<div class='info-item'><span class='info-label'>Ultimo reinicio:</span><span class='info-value'>CPU0: {1}<br/>CPU1: {2}</span></div>";
  	const char HTTP_INFO_aphost[] PROGMEM = "<div class='info-item'><span class='info-label'>Hostname del AP:</span><span class='info-value'>{1}</span></div>";
    const char HTTP_INFO_psrsize[] PROGMEM = "<div class='info-item'><span class='info-label'>Memoria PSRAM:</span><span class='info-value'>{1} bytes</span></div>";
	const char HTTP_INFO_temp[] PROGMEM = "<div class='info-item'><span class='info-label'>Temperatura:</span><span class='info-value'>{1}°C / {2}°F</span></div><div class='info-item'><span class='info-label'>Sensor Hall:</span><span class='info-value'>{3}</span></div>";
#else
	const char HTTP_INFO_esphead[] PROGMEM = "<div class='info-section'><h3>ESP8266</h3>";
	const char HTTP_INFO_fchipid[] PROGMEM = "<div class='info-item'><span class='info-label'>Flash Chip ID:</span><span class='info-value'>{1}</span></div>";
	const char HTTP_INFO_corever[] PROGMEM = "<div class='info-item'><span class='info-label'>Core Version:</span><span class='info-value'>{1}</span></div>";
	const char HTTP_INFO_bootver[] PROGMEM = "<div class='info-item'><span class='info-label'>Boot Version:</span><span class='info-value'>{1}</span></div>";
	const char HTTP_INFO_lastreset[] PROGMEM = "<div class='info-item'><span class='info-label'>Ultimo reinicio:</span><span class='info-value'>{1}</span></div>";
	const char HTTP_INFO_flashsize[] PROGMEM = "<div class='info-item'><span class='info-label'>Tamano Flash Real:</span><span class='info-value'>{1} bytes</span></div>";
#endif

const char HTTP_INFO_memsmeter[] PROGMEM = "<div class='progress-bar'><div class='progress-fill' style='width:{1}%'></div></div></span></div>";
const char HTTP_INFO_memsketch[] PROGMEM = "<div class='info-item'><span class='info-label'>Memoria - Sketch:</span><span class='info-value'>Usado / Total<br/>{1} / {2}";
const char HTTP_INFO_freeheap[] PROGMEM = "<div class='info-item'><span class='info-label'>Memoria Libre:</span><span class='info-value'>{1} bytes disponibles</span></div>";
const char HTTP_INFO_wifihead[] PROGMEM = "</div><div class='info-section'><h3>Informacion WiFi</h3>";
// Simplificado: solo tiempo activo e IP
const char HTTP_INFO_uptime[] PROGMEM = "<div class='info-item'><span class='info-label'>Tiempo Conectado:</span><span class='info-value'>{1} Min {2} Seg</span></div>";
const char HTTP_INFO_staip[] PROGMEM = "<div class='info-item'><span class='info-label'>IP del Robot:</span><span class='info-value'>{1}</span></div>";
// Eliminadas las demás variables de información
const char HTTP_INFO_chipid[] PROGMEM = "";
const char HTTP_INFO_idesize[] PROGMEM = "";
const char HTTP_INFO_sdkver[] PROGMEM = "";
const char HTTP_INFO_cpufreq[] PROGMEM = "";
const char HTTP_INFO_apip[] PROGMEM = "";
const char HTTP_INFO_apmac[] PROGMEM = "";
const char HTTP_INFO_apssid[] PROGMEM = "";
const char HTTP_INFO_apbssid[] PROGMEM = "";
const char HTTP_INFO_stassid[] PROGMEM = "";
const char HTTP_INFO_stagw[] PROGMEM = "";
const char HTTP_INFO_stasub[] PROGMEM = "";
const char HTTP_INFO_dnss[] PROGMEM = "";
const char HTTP_INFO_host[] PROGMEM = "";
const char HTTP_INFO_stamac[] PROGMEM = "";
const char HTTP_INFO_conx[] PROGMEM = "";
const char HTTP_INFO_autoconx[] PROGMEM = "";

const char HTTP_INFO_aboutver[] PROGMEM = "</div><div class='info-section'><h3>Informacion del Sistema</h3><div class='info-item'><span class='info-label'>WiFiManager:</span><span class='info-value'>{1}</span></div>";
const char HTTP_INFO_aboutarduino[] PROGMEM = "<div class='info-item'><span class='info-label'>Arduino:</span><span class='info-value'>{1}</span></div>";
const char HTTP_INFO_aboutsdk[] PROGMEM = "<div class='info-item'><span class='info-label'>ESP-SDK/IDF:</span><span class='info-value'>{1}</span></div>";
const char HTTP_INFO_aboutdate[] PROGMEM = "<div class='info-item'><span class='info-label'>Fecha de Compilacion:</span><span class='info-value'>{1}</span></div></div>";

// Constantes de texto
const char S_brand[] PROGMEM = "Nibo Robot";
const char S_debugPrefix[] PROGMEM = "*nibo:";
const char S_y[] PROGMEM = "Si";
const char S_n[] PROGMEM = "No";
const char S_enable[] PROGMEM = "Habilitado";
const char S_disable[] PROGMEM = "Deshabilitado";
const char S_GET[] PROGMEM = "GET";
const char S_POST[] PROGMEM = "POST";
const char S_NA[] PROGMEM = "N/A";
const char S_passph[] PROGMEM = "••••••••";
const char S_titlewifisaved[] PROGMEM = "WiFi Configurado";
const char S_titlewifisettings[] PROGMEM = "Configuracion Guardada";
const char S_titlewifi[] PROGMEM = "Configurar Nibo";
const char S_titleinfo[] PROGMEM = "Informacion del Robot";
const char S_titleparam[] PROGMEM = "Configuracion Avanzada";
const char S_titleparamsaved[] PROGMEM = "Configuracion Guardada";
const char S_titleexit[] PROGMEM = "Salir";
const char S_titlereset[] PROGMEM = "Reiniciar";
const char S_titleerase[] PROGMEM = "Borrar Configuracion";
const char S_titleclose[] PROGMEM = "Cerrar Portal";
const char S_options[] PROGMEM = "opciones";
const char S_nonetworks[] PROGMEM = "No se encontraron redes WiFi. Presiona 'Buscar' para escanear nuevamente.";
const char S_staticip[] PROGMEM = "IP Estatica";
const char S_staticgw[] PROGMEM = "Gateway Estatico";
const char S_staticdns[] PROGMEM = "DNS Estatico";
const char S_subnet[] PROGMEM = "Mascara de Subred";
const char S_exiting[] PROGMEM = "Saliendo del portal de configuracion...";
const char S_resetting[] PROGMEM = "El robot Nibo se reiniciara en unos segundos.";
const char S_closing[] PROGMEM = "Puedes cerrar esta pagina, el portal seguira funcionando";
const char S_error[] PROGMEM = "Ha Ocurrido un Error";
const char S_notfound[] PROGMEM = "Archivo No Encontrado\n\n";
const char S_uri[] PROGMEM = "URI: ";
const char S_method[] PROGMEM = "\nMetodo: ";
const char S_args[] PROGMEM = "\nArgumentos: ";
const char S_parampre[] PROGMEM = "param_";

// Debug strings
const char D_HR[] PROGMEM = "--------------------";

// Prefijo SSID por defecto
#ifdef ESP8266
    const char S_ssidpre[] PROGMEM = "Nibo-ESP";
#elif defined(ESP32)
    const char S_ssidpre[] PROGMEM = "Nibo-Robot";
#else
    const char S_ssidpre[] PROGMEM = "Nibo-WM";
#endif

#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM =
"<script>"
"function postAjax(url, data, success) {"
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
"    return xhr;"
"}"
"// Función para mostrar estado de conexión en tiempo real"
"function checkConnectionStatus() {"
"    postAjax('/status', '', function(data) {"
"        console.log('Estado de conexión:', data);"
"    });"
"}"
"// Verificar estado cada 5 segundos durante la conexión"
"if(window.location.pathname === '/wifi') {"
"    setInterval(checkConnectionStatus, 5000);"
"}"
"</script>";
#endif

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

#endif