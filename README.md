GreenFarm — Sistema IoT de Monitorització d’Humitat del Sòl
Descripció del projecte

GreenFarm és un sistema IoT basat en una ESP32 que monitoritza en temps real la humitat del sòl i activa un LED d’alerta quan es detecta sequedat. El sistema incorpora un servidor web integrat que mostra les dades actualitzades i permet una gestió del reg més eficient.
Objectiu del projecte

Desenvolupar un sistema capaç de detectar l’estat d’humitat del sòl i generar alertes visuals quan el terreny es troba sec, optimitzant així el consum d’aigua i millorant la sostenibilitat del cultiu.
Per saber més, consulta l’objectiu del projecte.
Context

L’agricultura sovint pateix problemes de reg ineficient per manca de dades en temps real. GreenFarm resol aquesta necessitat mitjançant un sistema IoT senzill, econòmic i escalable.
Consulta el context del projecte.
Descripció del problema

Sense monitorització, el sòl pot quedar sec o rebre excés de reg, afectant la salut del cultiu i el consum d’aigua.
Veure la descripció del problema.
Solució proposada

S’implementa una ESP32 que llegeix el sensor d’humitat, activa un LED quan el sòl és sec i mostra les dades en un servidor web.
Detalls a la solució proposada.
Explicació tècnica

    Lectura analògica del sensor d’humitat

    Lògica de control per detectar sequedat

    Activació del LED d’alerta

    Servidor web integrat amb actualització d’estat

Consulta l’explicació tècnica.
Estructura del repositori
Code:
projecte_iot/
 ├── README.md
 ├── src/
 │    └── main.ino
 └── doc/
      └── document_tecnic.pdf
Tauler Kanban (GitHub Project)

    🟥 To Do

    🟨 Doing

    🟩 Done

Inclou seguiment real del projecte, tasques i Issues.
Veure el projecte Kanban.
Control del projecte

    Registre d’errors i incidències

    Justificació de decisions tècniques

    Evolució documentada

Consulta el control del projecte.
Issues

Cada Issue documenta una tasca concreta, el problema detectat (si n’hi ha), la solució aplicada i l’estat final.
Veure el llistat d’Issues.
