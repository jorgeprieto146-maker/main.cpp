## 📌 Descripción del Programa

Este programa en **C++** implementa un sistema básico de gestión e informe de inventario utilizando la Librería Estándar (STL), específicamente el contenedor `std::map`. 

El sistema realiza un análisis completo de los datos almacenados y genera un reporte detallado en consola que incluye el estado de los artículos y estadísticas clave.

### 🚀 Funcionalidades Principales

* **Listado Alfabético:** Recorre el inventario e imprime todos los productos y sus cantidades. Gracias al comportamiento interno de `std::map`, los elementos se presentan automáticamente ordenados de forma alfabética por nombre.
* **Cálculo de Totales:**
  * **Variedad de Productos:** Cuenta la cantidad de tipos de artículos distintos en stock mediante `.size()`.
  * **Unidades Totales:** Suma la cantidad global de unidades combinadas de todos los productos.
* **Identificación de Extremos:**
  * **Mayor Stock:** Identifica el producto con la mayor cantidad disponible.
  * **Menor Stock:** Identifica el producto con la menor cantidad disponible (utilizando `INT_MAX` para una comparación robusta).

---

### 💻 Ejemplo de Salida en Consola

```text
===== INVENTORY REPORT =====
apples: 50
bananas: 30
grapes: 40
oranges: 25
strawberries: 15

===== SUMMARY =====
Total items: 5
Total quantity: 160
Highest stock: apples (50)
Lowest stock: strawberries (15)
