#include "ListP.h"

void ListP::AddatEnd(Poligono item)//añadir elemento al final de la lista
{
	Node* newNode = new Node();
	newNode->poligono = item;
	if (header == nullptr)
	{
		header = newNode;
		newNode->next = nullptr;
	}
	else
	{
		Node* tempNode = new Node();
		tempNode = header;
		while (tempNode->next != nullptr)
		{
			tempNode = tempNode->next;
		}
		tempNode->next = newNode;
		newNode->next = nullptr;
	}
}

void ListP::Clear() //limpieza de la lista 
{
	header->next = nullptr;
	header = nullptr;

}

int ListP::Count() //cantidad de elementos en la lista
{
	Node* tempNode = new Node();
	tempNode = header;
	int cont = 0;

	while (tempNode != nullptr)
	{
		tempNode = tempNode->next;
		cont++;
	}
	return cont;

}

bool ListP::Contains(int item) //verifica si el elemento indicado se encuentra en la lista
{
	Node* tempNode = new Node();
	tempNode = header;
	int cont = 0;
	while (tempNode != nullptr)
	{
		if (item == tempNode->data)
		{
			cont++;
		}
		tempNode = tempNode->next;
	}

	if (cont > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int ListP::IndexOf(int item) //índice de la primera ocurrencia del elemento indicado dentro de la list
{
	Node* tempNode = new Node();
	tempNode = header;
	int index = 0, pos = 0;

	while (tempNode != nullptr)
	{
		if (pos == 0)
		{
			if (item == tempNode->data)
			{
				pos = index;
				return pos;
			}
		}

		tempNode = tempNode->next;
		index++;
	}
	return -1;
}

void ListP::Insert(int index, int item) // Inserta un elemento en una posición específica de la lista
{
	Node* tempNode = new Node();
	tempNode->data = item;
	Node* auxNode = new Node();
	auxNode = header;
	int cont = 0;
	if (Count() == 0 && index == 0)
	{
		header = tempNode;
		tempNode->next = nullptr;
	}
	else
	{
		while (auxNode != nullptr)
		{
			if (index == 0) { //valida si se inserta en 0
				tempNode->next = auxNode;
				header = tempNode;
				break;
			}
			if (index > 0 && cont == index - 1)
			{
				tempNode->next = auxNode->next;
				auxNode->next = tempNode;
				break;
			}
			auxNode = auxNode->next;
			cont++;
		}

	}
}

int ListP::GetItem(int index) //obtiene el valor de la lista en una posición específica
{
	Node* tempNode = new Node();
	tempNode = header;
	int cont = 0, val = 0;

	while (tempNode != nullptr)
	{
		if (cont == index)
		{
			val = tempNode->data;
		}
		tempNode = tempNode->next;
		cont++;
	}
	return val;
}

void ListP::SetItem(int index, int item) //reemplaza el item de una posición
{
	Node* tempNode = new Node();
	tempNode = header;
	int cont = 0;

	while (tempNode != nullptr)
	{
		if (cont == index)
		{
			tempNode->data = item;
		}
		tempNode = tempNode->next;
		cont++;
	}

}

int ListP::LastIndexOf(int item) //ultima posición de un mismo elemento 
{
	Node* tempNode = new Node();
	tempNode = header;
	int cont = 0, pos = -1;
	while (tempNode != nullptr)
	{
		if (tempNode->data == item)
		{
			pos = cont;
		}
		tempNode = tempNode->next;
		cont++;
	}
	return pos;
}

bool ListP::Remove(int item) //elimina la primera ocurrencia del elemento en la lista
{
	if (IndexOf(item) == 0)
	{
		return true;
	}
	else
	{
		RemoveAt(IndexOf(item));
		return true;
	}
}

void ListP::RemoveAt(int index) //elimina una posición específica en la lista
{
	Node* tempNode = new Node();
	tempNode = header;
	int cont = 0;
	while (tempNode != nullptr)
	{
		if (index == 0)
		{
			header = tempNode->next;
			break;
		}
		if (index > 0 && cont == index - 1)
		{
			tempNode->next = tempNode->next->next;
		}
		tempNode = tempNode->next;
		cont++;
	}
}