#pragma once

template <typename T>
class Pila;
{
private:
	struct Node
	{
		T value;
		Node* next;

		Node(T value) 
		{
			this->value = value;
			this->next = nullptr;
		}
	};

	int size;
	Node* head;

public:

	Stack() {
		this->head = nullptr;
		this->size = 0;
	}

	int get_size() {
		return this->size;
	}

	bool is_empty() {
		return this->head == nullptr;
	}

	void push(T* item) {
		Node* node = new Node(item);
		this->size++;

		if (this->is_empty()) {
			this->head = node;
			return;
		}

		node->next = this->head;
		this->head = node;
	}

	T* peek() {
		return this->head->value;
	}

	T* pop() {
		T* item = this->head->value;

		this->head = this->head->next;

		this->size--;

		return item;
	}
	/// <summary>
	/// Agrega un elemento al FINAL de la lista
	/// </summary>
	/// <param name="item">Elemento a agregar</param>
	void Add(int item);
	/// <summary>
	/// Elimina todos los elementos de la Lista.
	/// </summary>
	void Clear();

	/// <summary>
/// Cuenta la cantidad de elementos en la lista
/// </summary>
/// <returns>Cantidad de elementos en la lista</returns>
	int Count();
	/// <summary>
	/// Verifica si el elemento indicado se encuentra en la lista
	/// </summary>
	/// <param name="item">Elemento a verificar</param>
	/// <returns>Verdadero si el elemento está en la lista, Falso en caso contrario</returns>
	bool Contains(int item);
	/// <summary>
	/// Obtiene el índice de la primera ocurrencia del elemento indicado dentro de la lista
		/// </summary>
		/// <param name="item">Elemento a verificar</param>
		/// <returns>El índice (base 0) de la primera ocurrencia si lo encontró, -1 en caso contrario< / returns>
		int IndexOf(int item);
	/// <summary>
	/// Inserta un elemento en una posición específica de la lista
	/// </summary>
	/// <param name="index">Posición/Índice (base 0) dentro de la lista</param>
	/// <param name="item">Elemento a insertar</param>
	/// <exception cref="System.ArgumentOutOfRangeException">index menor a 0 o index mayor a Count< / exception>
		void Insert(int index, int item);
	/// <summary>
	/// Obtiene el valor del elemento en la posición indicada de la lista
	/// </summary>
	/// <param name="index">Posición/Índice (base 0) dentro de la lista</param>
	/// <returns>Elemento en posición indicada</returns>
	/// <exception cref="System.ArgumentOutOfRangeException">index menor a 0 o index mayor o igual a Count< / exception>
		int GetItem(int index);
	/// <summary>
	/// Cambia el elemento en la posición indicada de la lista
	/// </summary>
	/// <param name="index">Posición/Índice (base 0) dentro de la lista</param>
	/// <param name="item">Elemento a actualizar</param>
	/// <exception cref="System.ArgumentOutOfRangeException">index menor a 0 o index mayor o igual a Count< / exception>
		void SetItem(int index, int item);
	/// <summary>
	/// Obtiene el índice de la última ocurrencia del elemento indicado dentro de la lista
		/// </summary>
		/// <param name="item">Elemento a verificar</param>
/// <returns>El índice (base 0) de la última ocurrencia si lo encontró, -1 en caso contrario< / returns>
			int LastIndexOf(int item);
		/// <summary>
		/// Elimina la primera ocurrencia del elemento en la lista
		/// </summary>
		/// <param name="item">Elemento a eliminar</param>
		/// <returns> Verdadero si el elemento fue removido, Falso si no fue encontrado</returns>
		bool Remove(int item);
		/// <summary>
		/// Elimina el elemento en la posición de la lista indicada
		/// </summary>
		/// <param name="index">Posición/Índice (base 0) dentro de la lista</param>
		/// <exception cref="System.ArgumentOutOfRangeException">index menor a 0 o index mayor o igual a Count< / exception>
			void RemoveAt(int index);
};