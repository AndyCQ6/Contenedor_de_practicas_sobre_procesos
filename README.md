# 🐳 Contenedor de Prácticas sobre Procesos

Este repositorio contiene toda la documentación necesaria para correr un entorno de C directamente sobre la terminal de PowerShell en Windows con soporte de Docker Desktop y Windows System for Linux (WSL).

---

## 📚 Conceptos Abordados

El entorno está diseñado para poner en práctica y experimentar con los siguientes temas:

* **Interfaces y Terminales:** Entendiendo la diferencia entre CLI y GUI, y utilizando las terminales correctas en Windows (CMD, PowerShell y WSL) junto con sus respectivas variables de entorno (como `%cd%` vs `${PWD}`).
* **Gestión de Procesos:** Análisis de un proceso en ejecución y la implementación de la llamada al sistema `fork()` de Unix/Linux para la duplicación de procesos en C.
* **Docker y Contenedores:** Diferenciación entre una imagen (la plantilla o molde) y un contenedor (la instancia en ejecución desechable).
* **Virtualización:** Cómo interactúa Docker con el hardware a través del kernel de Linux nativo usando la capa de compatibilidad de WSL2.

---

## 📖 Material de Repaso de la Clase

Si necesitas consultar las diapositivas de la clase para repasar la teoría, revisar la estructura del OS, o ver las soluciones a los errores comunes con Docker, puedes abrir el siguiente documento:

👉 **[Ver presentación de la clase: Repaso CLI, GUI y Docker (PDF)](./Repaso_CLI_GUI_y_Docker.pdf)**

---

## 🚀 Uso Rápido

Para levantar el contenedor y compilar los ejercicios, asegúrate de estar en **PowerShell** y utiliza el siguiente comando[cite: 1]:

```bash
docker run -it --rm -v ${PWD}:/codigo --cap-add=SYS_PTRACE entorno-c
