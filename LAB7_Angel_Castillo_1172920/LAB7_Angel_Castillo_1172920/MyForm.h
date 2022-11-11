#pragma once
#include "Polígonos.h"
#include <stdio.h>
#include <Windows.h>
#include<time.h>;
#include <stdlib.h>
#include<iostream>
#include<cstdlib>
#include <msclr/marshal_cppstd.h>
#include "ListP.h"
#include "CUADRADO.h"
#include "TRIANGULO.h"
#include "RECTANGULO.h"

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

		
		int id;
		

	private: System::Windows::Forms::Label^ label11;
	public:
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ lbl3;
	private: System::Windows::Forms::TextBox^ txtHash;
	private: System::Windows::Forms::Button^ btnHash;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnInicializar;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ btnActualizar;
	private: System::Windows::Forms::GroupBox^ groupBoxCuadrado;
	private: System::Windows::Forms::Button^ btnCuadrado;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtLadoC;
	private: System::Windows::Forms::TextBox^ txtColorC;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::GroupBox^ groupBoxRectangulo;
	private: System::Windows::Forms::Button^ btnRectangulo;
	private: System::Windows::Forms::TextBox^ txtAlturaR;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtBaseR;
	private: System::Windows::Forms::TextBox^ txtColorR;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBoxTriangulo;
	private: System::Windows::Forms::Button^ btnTriangulo;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtColorT;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ txtBaseT;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ txtLadoT;

	public:

	public:
		int* arreglo;
		Hashtable^ newHash = gcnew Hashtable();
		ListP<Poligono>* listPoligonos;
		int* arreglo2;

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			listPoligonos = new ListP<Poligono>();
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

	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Label^ lbl2;





	private: System::Windows::Forms::TextBox^ txtBinaria;
	private: System::Windows::Forms::TextBox^ txtSecuencial;
	private: System::Windows::Forms::Button^ btnSecuencial;

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
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnInicializar = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->btnActualizar = (gcnew System::Windows::Forms::Button());
			this->groupBoxCuadrado = (gcnew System::Windows::Forms::GroupBox());
			this->btnCuadrado = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtLadoC = (gcnew System::Windows::Forms::TextBox());
			this->txtColorC = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBoxRectangulo = (gcnew System::Windows::Forms::GroupBox());
			this->btnRectangulo = (gcnew System::Windows::Forms::Button());
			this->txtAlturaR = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtBaseR = (gcnew System::Windows::Forms::TextBox());
			this->txtColorR = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBoxTriangulo = (gcnew System::Windows::Forms::GroupBox());
			this->btnTriangulo = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtColorT = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txtBaseT = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->txtLadoT = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBoxCuadrado->SuspendLayout();
			this->groupBoxRectangulo->SuspendLayout();
			this->groupBoxTriangulo->SuspendLayout();
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
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->btnInicializar);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Controls->Add(this->btnActualizar);
			this->tabPage2->Controls->Add(this->groupBoxCuadrado);
			this->tabPage2->Controls->Add(this->groupBoxRectangulo);
			this->tabPage2->Controls->Add(this->groupBoxTriangulo);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(505, 476);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Ejercicio 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(386, 298);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(53, 13);
			this->label15->TabIndex = 33;
			this->label15->Text = L"Perímetro";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(307, 298);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(29, 13);
			this->label14->TabIndex = 32;
			this->label14->Text = L"Área";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(223, 298);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Color";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(115, 298);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Tipo de figura";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(71, 298);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 13);
			this->label4->TabIndex = 29;
			this->label4->Text = L"ID";
			// 
			// btnInicializar
			// 
			this->btnInicializar->Location = System::Drawing::Point(15, 258);
			this->btnInicializar->Margin = System::Windows::Forms::Padding(2);
			this->btnInicializar->Name = L"btnInicializar";
			this->btnInicializar->Size = System::Drawing::Size(137, 20);
			this->btnInicializar->TabIndex = 28;
			this->btnInicializar->Text = L"Vaciar Lista";
			this->btnInicializar->UseVisualStyleBackColor = true;
			this->btnInicializar->Click += gcnew System::EventHandler(this, &MyForm::btnInicializar_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(49, 314);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(406, 147);
			this->listBox1->TabIndex = 27;
			// 
			// btnActualizar
			// 
			this->btnActualizar->Location = System::Drawing::Point(356, 258);
			this->btnActualizar->Margin = System::Windows::Forms::Padding(2);
			this->btnActualizar->Name = L"btnActualizar";
			this->btnActualizar->Size = System::Drawing::Size(137, 20);
			this->btnActualizar->TabIndex = 26;
			this->btnActualizar->Text = L"Actualizar la lista";
			this->btnActualizar->UseVisualStyleBackColor = true;
			this->btnActualizar->Click += gcnew System::EventHandler(this, &MyForm::btnActualizar_Click);
			// 
			// groupBoxCuadrado
			// 
			this->groupBoxCuadrado->Controls->Add(this->btnCuadrado);
			this->groupBoxCuadrado->Controls->Add(this->label13);
			this->groupBoxCuadrado->Controls->Add(this->txtLadoC);
			this->groupBoxCuadrado->Controls->Add(this->txtColorC);
			this->groupBoxCuadrado->Controls->Add(this->label17);
			this->groupBoxCuadrado->Location = System::Drawing::Point(367, 10);
			this->groupBoxCuadrado->Margin = System::Windows::Forms::Padding(2);
			this->groupBoxCuadrado->Name = L"groupBoxCuadrado";
			this->groupBoxCuadrado->Padding = System::Windows::Forms::Padding(2);
			this->groupBoxCuadrado->Size = System::Drawing::Size(133, 244);
			this->groupBoxCuadrado->TabIndex = 25;
			this->groupBoxCuadrado->TabStop = false;
			this->groupBoxCuadrado->Text = L"Cuadrado";
			// 
			// btnCuadrado
			// 
			this->btnCuadrado->Location = System::Drawing::Point(36, 202);
			this->btnCuadrado->Margin = System::Windows::Forms::Padding(2);
			this->btnCuadrado->Name = L"btnCuadrado";
			this->btnCuadrado->Size = System::Drawing::Size(71, 25);
			this->btnCuadrado->TabIndex = 14;
			this->btnCuadrado->Text = L"Agregar";
			this->btnCuadrado->UseVisualStyleBackColor = true;
			this->btnCuadrado->Click += gcnew System::EventHandler(this, &MyForm::btnCuadrado_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(7, 169);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 13);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Color";
			// 
			// txtLadoC
			// 
			this->txtLadoC->Location = System::Drawing::Point(34, 62);
			this->txtLadoC->Margin = System::Windows::Forms::Padding(2);
			this->txtLadoC->Name = L"txtLadoC";
			this->txtLadoC->Size = System::Drawing::Size(60, 20);
			this->txtLadoC->TabIndex = 13;
			// 
			// txtColorC
			// 
			this->txtColorC->Location = System::Drawing::Point(42, 167);
			this->txtColorC->Margin = System::Windows::Forms::Padding(2);
			this->txtColorC->Name = L"txtColorC";
			this->txtColorC->Size = System::Drawing::Size(84, 20);
			this->txtColorC->TabIndex = 20;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(7, 46);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(121, 13);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Logitud de los dos lados";
			// 
			// groupBoxRectangulo
			// 
			this->groupBoxRectangulo->Controls->Add(this->btnRectangulo);
			this->groupBoxRectangulo->Controls->Add(this->txtAlturaR);
			this->groupBoxRectangulo->Controls->Add(this->label7);
			this->groupBoxRectangulo->Controls->Add(this->txtBaseR);
			this->groupBoxRectangulo->Controls->Add(this->txtColorR);
			this->groupBoxRectangulo->Controls->Add(this->label12);
			this->groupBoxRectangulo->Controls->Add(this->label5);
			this->groupBoxRectangulo->Location = System::Drawing::Point(181, 10);
			this->groupBoxRectangulo->Margin = System::Windows::Forms::Padding(2);
			this->groupBoxRectangulo->Name = L"groupBoxRectangulo";
			this->groupBoxRectangulo->Padding = System::Windows::Forms::Padding(2);
			this->groupBoxRectangulo->Size = System::Drawing::Size(134, 244);
			this->groupBoxRectangulo->TabIndex = 24;
			this->groupBoxRectangulo->TabStop = false;
			this->groupBoxRectangulo->Text = L"Rectángulo";
			// 
			// btnRectangulo
			// 
			this->btnRectangulo->Location = System::Drawing::Point(36, 202);
			this->btnRectangulo->Margin = System::Windows::Forms::Padding(2);
			this->btnRectangulo->Name = L"btnRectangulo";
			this->btnRectangulo->Size = System::Drawing::Size(75, 25);
			this->btnRectangulo->TabIndex = 14;
			this->btnRectangulo->Text = L"Agregar";
			this->btnRectangulo->UseVisualStyleBackColor = true;
			this->btnRectangulo->Click += gcnew System::EventHandler(this, &MyForm::btnRectangulo_Click);
			// 
			// txtAlturaR
			// 
			this->txtAlturaR->Location = System::Drawing::Point(36, 125);
			this->txtAlturaR->Margin = System::Windows::Forms::Padding(2);
			this->txtAlturaR->Name = L"txtAlturaR";
			this->txtAlturaR->Size = System::Drawing::Size(60, 20);
			this->txtAlturaR->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 169);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 13);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Color";
			// 
			// txtBaseR
			// 
			this->txtBaseR->Location = System::Drawing::Point(36, 62);
			this->txtBaseR->Margin = System::Windows::Forms::Padding(2);
			this->txtBaseR->Name = L"txtBaseR";
			this->txtBaseR->Size = System::Drawing::Size(60, 20);
			this->txtBaseR->TabIndex = 13;
			// 
			// txtColorR
			// 
			this->txtColorR->Location = System::Drawing::Point(42, 167);
			this->txtColorR->Margin = System::Windows::Forms::Padding(2);
			this->txtColorR->Name = L"txtColorR";
			this->txtColorR->Size = System::Drawing::Size(84, 20);
			this->txtColorR->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(15, 32);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(94, 13);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Logitud de la base";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 102);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Logitud de la altura";
			// 
			// groupBoxTriangulo
			// 
			this->groupBoxTriangulo->Controls->Add(this->btnTriangulo);
			this->groupBoxTriangulo->Controls->Add(this->label6);
			this->groupBoxTriangulo->Controls->Add(this->txtColorT);
			this->groupBoxTriangulo->Controls->Add(this->label16);
			this->groupBoxTriangulo->Controls->Add(this->label18);
			this->groupBoxTriangulo->Controls->Add(this->txtBaseT);
			this->groupBoxTriangulo->Controls->Add(this->label19);
			this->groupBoxTriangulo->Controls->Add(this->label20);
			this->groupBoxTriangulo->Controls->Add(this->txtLadoT);
			this->groupBoxTriangulo->Location = System::Drawing::Point(5, 10);
			this->groupBoxTriangulo->Margin = System::Windows::Forms::Padding(2);
			this->groupBoxTriangulo->Name = L"groupBoxTriangulo";
			this->groupBoxTriangulo->Padding = System::Windows::Forms::Padding(2);
			this->groupBoxTriangulo->Size = System::Drawing::Size(130, 244);
			this->groupBoxTriangulo->TabIndex = 23;
			this->groupBoxTriangulo->TabStop = false;
			this->groupBoxTriangulo->Text = L"Triángulo";
			// 
			// btnTriangulo
			// 
			this->btnTriangulo->Location = System::Drawing::Point(36, 202);
			this->btnTriangulo->Margin = System::Windows::Forms::Padding(2);
			this->btnTriangulo->Name = L"btnTriangulo";
			this->btnTriangulo->Size = System::Drawing::Size(71, 25);
			this->btnTriangulo->TabIndex = 6;
			this->btnTriangulo->Text = L"Agregar";
			this->btnTriangulo->UseVisualStyleBackColor = true;
			this->btnTriangulo->Click += gcnew System::EventHandler(this, &MyForm::btnTriangulo_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 169);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Color";
			// 
			// txtColorT
			// 
			this->txtColorT->Location = System::Drawing::Point(42, 167);
			this->txtColorT->Margin = System::Windows::Forms::Padding(2);
			this->txtColorT->Name = L"txtColorT";
			this->txtColorT->Size = System::Drawing::Size(84, 20);
			this->txtColorT->TabIndex = 11;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(44, 115);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(48, 13);
			this->label16->TabIndex = 10;
			this->label16->Text = L"diferente";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(23, 102);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(82, 13);
			this->label18->TabIndex = 9;
			this->label18->Text = L"Logitud del lado";
			// 
			// txtBaseT
			// 
			this->txtBaseT->Location = System::Drawing::Point(33, 136);
			this->txtBaseT->Margin = System::Windows::Forms::Padding(2);
			this->txtBaseT->Name = L"txtBaseT";
			this->txtBaseT->Size = System::Drawing::Size(60, 20);
			this->txtBaseT->TabIndex = 8;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(44, 46);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(40, 13);
			this->label19->TabIndex = 7;
			this->label19->Text = L"iguales";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(7, 32);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(121, 13);
			this->label20->TabIndex = 6;
			this->label20->Text = L"Logitud de los dos lados";
			// 
			// txtLadoT
			// 
			this->txtLadoT->Location = System::Drawing::Point(33, 62);
			this->txtLadoT->Margin = System::Windows::Forms::Padding(2);
			this->txtLadoT->Name = L"txtLadoT";
			this->txtLadoT->Size = System::Drawing::Size(60, 20);
			this->txtLadoT->TabIndex = 0;
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
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBoxCuadrado->ResumeLayout(false);
			this->groupBoxCuadrado->PerformLayout();
			this->groupBoxRectangulo->ResumeLayout(false);
			this->groupBoxRectangulo->PerformLayout();
			this->groupBoxTriangulo->ResumeLayout(false);
			this->groupBoxTriangulo->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		

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
					 if (clave > 0)
						clave = claveHash(n + clave, size);
					 else
				     {
					    clave = claveHash(size + n^2, size);
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
			   clave = clave * n;
			   return clave;
				  
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

		   int busquedaHash(int n, int size, int clave)
		   {
			   int i = 0;
			   int numero;
			   while (i < size)
			   {
				   numero = Convert::ToInt32(newHash[clave]);
				   if (numero == n)
				   {
					   return clave;
				   }
				   else
				   {
					   if (clave > 0)
						   clave = claveHash(n + clave, size);
					   else
					   {
						   clave = claveHash(size + n ^ 2, size);
					   }

				   }
				   i++;
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
		int clave = claveHash(search, newHash->Count);
		int searched = busquedaHash(search, newHash->Count, clave);
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
			MessageBox::Show("El número se encontró en la posición: " + searched + " del la tabla hash", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}


	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void btnTriangulo_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		int base = Convert::ToInt32(txtBaseT->Text);
		int lado = Convert::ToInt32(txtLadoT->Text);
		String^ color = txtColorT->Text;
		string _color = msclr::interop::marshal_as<string>(color);
		string figura = "Triangulo";
		int ID = 1000 + id;
		TRIANGULO* newTriangulo = new TRIANGULO(figura, _color, ID, base, lado);
		listPoligonos->add(newTriangulo);
		id++;
		MessageBox::Show("El triangulo se ingresó correctamente", ":)", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void btnRectangulo_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		int base = Convert::ToInt32(txtBaseR->Text);
		int altura = Convert::ToInt32(txtAlturaR->Text);
		String^ color = txtColorR->Text;
		string _color = msclr::interop::marshal_as<string>(color);
		string figura = "Rectángulo";
		int ID = 2000 + id;
		RECTANGULO* newRectangulo = new RECTANGULO(figura, _color, ID, base, altura);
		listPoligonos->add(newRectangulo);
		id++;
		MessageBox::Show("El rectángulo se ingresó correctamente", ":)", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void btnCuadrado_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		int base = Convert::ToInt32(txtLadoC->Text);
		String^ color = txtColorC->Text;
		string _color = msclr::interop::marshal_as<string>(color);
		string figura = "Cuadrado";
		int ID = 3000 + id;
		CUADRADO* newCuadrado = new CUADRADO(figura, _color, ID, base);
		listPoligonos->add(newCuadrado);
		id++;
		MessageBox::Show("El cuadrado se ingresó correctamente", ":)", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}


}

	   void showlist()
	   {
		   listBox1->Items->Clear();
		   int contador = 0;
		   while (listPoligonos->get(contador) != nullptr) {
			   string Figura;
			   string Color;
			   Color = listPoligonos->get(contador)->getColor();
			   String^ color = gcnew String(Color.c_str());
			   Figura = listPoligonos->get(contador)->getFigura();
			   String^ figura = gcnew String(Figura.c_str());
			   listBox1->Items->Add("        " + listPoligonos->get(contador)->id() + " ----------- " + figura + " ---------------- " + color + " ----------- " + 
				   (listPoligonos->get(contador)->calcularArea()) + " ------------- " + listPoligonos->get(contador)->calcularPerimetro());
			   contador++;
		   }

	   }
private: System::Void btnActualizar_Click(System::Object^ sender, System::EventArgs^ e) {

	if (listPoligonos->getSize() != 0)
		showlist();
	else
		MessageBox::Show("La lista esta vacía", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
}
private: System::Void btnInicializar_Click(System::Object^ sender, System::EventArgs^ e) {

	listPoligonos->clear();
	showlist();
	id = id * 0;
}
};
}
