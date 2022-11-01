#pragma once
#include <stdio.h>
#include <Windows.h>
#include<time.h>;
#include <stdlib.h>
#include<iostream>
#include<cstdlib>

namespace LAB7AngelCastillo1172920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		int *arreglo;

	public:

	public:
		int* arreglo2;

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnArray;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtArray;

	private: System::Windows::Forms::ListBox^ lbArray;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::Label^ lbl3;



	private: System::Windows::Forms::TextBox^ txtHash;
	private: System::Windows::Forms::TextBox^ txtBinaria;
	private: System::Windows::Forms::TextBox^ txtSecuencial;
	private: System::Windows::Forms::Button^ btnSecuencial;
	private: System::Windows::Forms::Button^ btnHash;
	private: System::Windows::Forms::Button^ btnBinaria;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->txtHash = (gcnew System::Windows::Forms::TextBox());
			this->txtBinaria = (gcnew System::Windows::Forms::TextBox());
			this->txtSecuencial = (gcnew System::Windows::Forms::TextBox());
			this->btnSecuencial = (gcnew System::Windows::Forms::Button());
			this->btnHash = (gcnew System::Windows::Forms::Button());
			this->btnBinaria = (gcnew System::Windows::Forms::Button());
			this->btnArray = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtArray = (gcnew System::Windows::Forms::TextBox());
			this->lbArray = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(513, 502);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(505, 476);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ejercicio 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->lbl1);
			this->groupBox1->Controls->Add(this->lbl2);
			this->groupBox1->Controls->Add(this->lbl3);
			this->groupBox1->Controls->Add(this->txtHash);
			this->groupBox1->Controls->Add(this->txtBinaria);
			this->groupBox1->Controls->Add(this->txtSecuencial);
			this->groupBox1->Controls->Add(this->btnSecuencial);
			this->groupBox1->Controls->Add(this->btnHash);
			this->groupBox1->Controls->Add(this->btnBinaria);
			this->groupBox1->Controls->Add(this->btnArray);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtArray);
			this->groupBox1->Controls->Add(this->lbArray);
			this->groupBox1->Location = System::Drawing::Point(6, 15);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(488, 455);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 117);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(109, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Búsqueda secuencial";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 208);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(89, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Búsqueda binaria";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 286);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(99, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Búsqueda por hash";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(183, 117);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Tiempo transcurrido";
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(183, 146);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(16, 13);
			this->lbl1->TabIndex = 13;
			this->lbl1->Text = L"---";
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(183, 239);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(16, 13);
			this->lbl2->TabIndex = 12;
			this->lbl2->Text = L"---";
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Location = System::Drawing::Point(183, 317);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(16, 13);
			this->lbl3->TabIndex = 11;
			this->lbl3->Text = L"---";
			// 
			// txtHash
			// 
			this->txtHash->Location = System::Drawing::Point(6, 312);
			this->txtHash->Name = L"txtHash";
			this->txtHash->Size = System::Drawing::Size(90, 20);
			this->txtHash->TabIndex = 9;
			// 
			// txtBinaria
			// 
			this->txtBinaria->Location = System::Drawing::Point(6, 234);
			this->txtBinaria->Name = L"txtBinaria";
			this->txtBinaria->Size = System::Drawing::Size(90, 20);
			this->txtBinaria->TabIndex = 8;
			// 
			// txtSecuencial
			// 
			this->txtSecuencial->Location = System::Drawing::Point(6, 143);
			this->txtSecuencial->Name = L"txtSecuencial";
			this->txtSecuencial->Size = System::Drawing::Size(90, 20);
			this->txtSecuencial->TabIndex = 7;
			// 
			// btnSecuencial
			// 
			this->btnSecuencial->Location = System::Drawing::Point(102, 141);
			this->btnSecuencial->Name = L"btnSecuencial";
			this->btnSecuencial->Size = System::Drawing::Size(75, 23);
			this->btnSecuencial->TabIndex = 1;
			this->btnSecuencial->Text = L"Buscar";
			this->btnSecuencial->UseVisualStyleBackColor = true;
			this->btnSecuencial->Click += gcnew System::EventHandler(this, &MyForm::btnSecuencial_Click);
			// 
			// btnHash
			// 
			this->btnHash->Location = System::Drawing::Point(102, 312);
			this->btnHash->Name = L"btnHash";
			this->btnHash->Size = System::Drawing::Size(75, 23);
			this->btnHash->TabIndex = 6;
			this->btnHash->Text = L"Buscar";
			this->btnHash->UseVisualStyleBackColor = true;
			this->btnHash->Click += gcnew System::EventHandler(this, &MyForm::btnHash_Click);
			// 
			// btnBinaria
			// 
			this->btnBinaria->Location = System::Drawing::Point(102, 234);
			this->btnBinaria->Name = L"btnBinaria";
			this->btnBinaria->Size = System::Drawing::Size(75, 23);
			this->btnBinaria->TabIndex = 5;
			this->btnBinaria->Text = L"Buscar";
			this->btnBinaria->UseVisualStyleBackColor = true;
			this->btnBinaria->Click += gcnew System::EventHandler(this, &MyForm::btnBinaria_Click);
			// 
			// btnArray
			// 
			this->btnArray->Location = System::Drawing::Point(210, 45);
			this->btnArray->Name = L"btnArray";
			this->btnArray->Size = System::Drawing::Size(90, 30);
			this->btnArray->TabIndex = 4;
			this->btnArray->Text = L"Generar arreglo";
			this->btnArray->UseVisualStyleBackColor = true;
			this->btnArray->Click += gcnew System::EventHandler(this, &MyForm::btnArray_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Ingrese cantidad de elementos del arreglo";
			// 
			// txtArray
			// 
			this->txtArray->Location = System::Drawing::Point(210, 19);
			this->txtArray->Name = L"txtArray";
			this->txtArray->Size = System::Drawing::Size(90, 20);
			this->txtArray->TabIndex = 2;
			// 
			// lbArray
			// 
			this->lbArray->FormattingEnabled = true;
			this->lbArray->Location = System::Drawing::Point(312, 19);
			this->lbArray->Name = L"lbArray";
			this->lbArray->Size = System::Drawing::Size(146, 420);
			this->lbArray->TabIndex = 1;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(505, 476);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 523);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		Hashtable^ newHash = gcnew Hashtable();

	private: System::Void btnArray_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			newHash->Clear();
			lbArray->Items->Clear();
			int length = Convert::ToInt32(txtArray->Text);
			genArray(length);

		}
		catch (Exception^ e)
		{
			MessageBox::Show("Error: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   void genArray(int size)
		   {
			   srand(time(NULL));
			   arreglo = new int [size];
			   arreglo2 = new int[size];

			   for (int i = 0; i < size; i++) {
				   int numero = rand() % (10*size);
				   arreglo[i] = numero;
				   arreglo2[i] = numero;
				   insertinHash(numero, size);
			   }
			   fillTable();
		   }

		   void insertinHash(int n, int size)
		   {
			   int i = 0;
			   int clave = claveHash(n, size);
			   bool added = false;
			   while (added != true)
			   {
				   if (newHash[clave] == nullptr)
				   {
					   newHash->Add(clave, n);
					   added = true;
				   }
				   else
				   {
					   if (i == 0)
					   {
						   if (clave > 0)
							   clave = claveHash(n + clave, size);
						   else
						   {
							   clave = claveHash(size + n + i, size);
							   i++;
						   }
					   }
					   else
					   {
						   if (clave > 0)
						   {
							   clave = claveHash((n + clave) ^ i, size);
							   i++;
						   }
							   
						   else
						   {
							   clave = claveHash((size + n + i)^2, size);
							   i++;
						   }
					   }
					   
					   
				   }
					   
			   }
			   



		   }

		   void shellSort(int length)
		   {
			   int index, i;
			   bool isMayor = false;

			   index = length;

			   while (index > 1)
			   {
				   index = index / 2;
				   isMayor = true;

				   while (isMayor == true)
				   {
					   isMayor = false;
					   i = 0;
					   while (index + i < length)
					   {
						   if (arreglo2[i] > arreglo2[index + i])
						   {
							   swap(i, index + i);
							   isMayor = true;
						   }
						   i++;
					   }

				   }
			   }

		   }
		   void swap(int i, int j)
		   {
			   int temp = arreglo2[i];
			   arreglo2[i] = arreglo2[j];
			   arreglo2[j] = temp;
		   }

		   int claveHash(int n, int size)
		   {
			   int clave;
			   clave = n % size;
			   bool validKey = false;
			   while (validKey != true)
			   {
				   if (clave >= size)
				   {
					   clave = (clave / 2);
				   }
				   else if (clave < 0)
				   {
					   clave = (clave + size);
				   }
				   else
				   {
					   return clave;
					   validKey = true;
				   }

			   }
			 
				  
		   }

		   void fillTable()
		   {
			   for (int i = 0; i < newHash->Count; i++)
			   {
				   lbArray->Items->Add(i + "---------------------->" + arreglo[i]);
			   }
		   }
		   
		   int secuencial(int searched, int length)
		   {
			   for (int i = 0; i < length; i++)
			   {
				   if (arreglo[i] == searched)
				   {
					   return i;
				   }
			   }
			   return -1;
		   }

		   int Binario(int numero, int size)
		   {
			   int first = 0;
			   int last = size - 1;
			   int medio;
			   while (first <= last) {
				   medio = (first + last) / 2;
				   if (arreglo2[medio] == numero) {
					   return medio;
				   }
				   else
				   {
					   if (arreglo2[medio] > numero) 
					   {
						   last = medio - 1;
					   }
					   else 
					   {
						   first = medio + 1;
					   }
				   }
			   }
			   return -1;
		   }

		   int busquedaHash(int n, int size)
		   {
			   int i = 0;
			   int clave = claveHash(n, size);
			   while (i < size)
			   {

				   if (newHash[clave] == n)
				   {
					   MessageBox::Show("Vete alv un uxas");
				   }
				   else
				   {
					   if (i == 0)
					   {
						   if (clave > 0)
							   clave = claveHash(n + clave, size);
						   else
						   {
							   clave = claveHash(size + n + i, size);
							   i++;
						   }
					   }
					   else
					   {
						   if (clave > 0)
						   {
							   clave = claveHash((n + clave) ^ i, size);
							   i++;
						   }

						   else
						   {
							   clave = claveHash((size + n + i) ^ 2, size);
							   i++;
						   }

					   }
				   }
			   }
			   
			   return -1;

		   }
private: System::Void btnSecuencial_Click(System::Object^ sender, System::EventArgs^ e) {
	Stopwatch^ time = gcnew Stopwatch();
	try
	{
		time->Start();
		int search = Convert::ToInt32(txtSecuencial->Text);
		int searched = secuencial(search, newHash->Count);
		
		if (searched == -1)
		{
			time->Stop();
			lbl1->Text = Convert::ToString(time->Elapsed);
			MessageBox::Show("No se encontró el número", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			time->Stop();
			lbl1->Text = Convert::ToString(time->Elapsed);
			MessageBox::Show("El número se encontró en la posición: " + searched, "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnBinaria_Click(System::Object^ sender, System::EventArgs^ e) {
	Stopwatch^ time = gcnew Stopwatch();

	try
	{
		time->Start();
		int search = Convert::ToInt32(txtBinaria->Text);
		shellSort(newHash->Count);
		int searched = Binario(search, newHash->Count);
		if (searched == -1)
		{
			time->Stop();
			lbl2->Text = Convert::ToString(time->Elapsed);
			MessageBox::Show("No se encontró el número", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			time->Stop();
			lbl2->Text = Convert::ToString(time->Elapsed);
			MessageBox::Show("El número se encontró en la posición: " + searched + " del arreglo ordenado", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnHash_Click(System::Object^ sender, System::EventArgs^ e) {

	Stopwatch^ time = gcnew Stopwatch();

	try
	{
		time->Start();
		int search = Convert::ToInt32(txtHash->Text);
		int searched = busquedaHash(search, newHash->Count);
		if (searched == -1)
		{
			time->Stop();
			lbl3->Text = Convert::ToString(time->Elapsed);
			MessageBox::Show("No se encontró el número", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			time->Stop();
			lbl3->Text = Convert::ToString(time->Elapsed);
			MessageBox::Show("El número se encontró en la posición: " + searched + " del arreglo ordenado", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}


	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}


}
};
}
