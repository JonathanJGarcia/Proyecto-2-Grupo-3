#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <locale.h>
#include <wchar.h>
#include "Cartas.h"
#include "metodos.h"

using namespace std;
metodos Ordenes;

namespace Proyecto2mundialgrupo3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox4;
	protected:





	private: System::Windows::Forms::TextBox^ textBox9;


	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::GroupBox^ groupBox3;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::TextBox^ textBox5;




	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button_exportarListado;

	private: System::Windows::Forms::Button^ button_seleccion_faltantes;

	private: System::Windows::Forms::Button^ button_seleccion_repetidas;

	private: System::Windows::Forms::Button^ button_noRepetidas;

	private: System::Windows::Forms::Button^ button_repetidas;

	private: System::Windows::Forms::Button^ button_filtrarPorSeleccion;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button_buscarPorCodigo;

	private: System::Windows::Forms::Button^ button_contarMarcadas;

	private: System::Windows::Forms::Button^ button_contarFaltantes;

	private: System::Windows::Forms::Button^ button_marcarPorArchivo;

	private: System::Windows::Forms::Button^ button_desmarcar;

	private: System::Windows::Forms::Button^ button_marcar;

	private: System::Windows::Forms::Button^ button_importar;

	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Button^ button_buscarPorNombre;
	private: System::Windows::Forms::TextBox^ textBox8;





	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button_salir;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button_exportarListado = (gcnew System::Windows::Forms::Button());
			this->button_seleccion_faltantes = (gcnew System::Windows::Forms::Button());
			this->button_seleccion_repetidas = (gcnew System::Windows::Forms::Button());
			this->button_noRepetidas = (gcnew System::Windows::Forms::Button());
			this->button_repetidas = (gcnew System::Windows::Forms::Button());
			this->button_filtrarPorSeleccion = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button_buscarPorCodigo = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button_contarMarcadas = (gcnew System::Windows::Forms::Button());
			this->button_contarFaltantes = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button_marcarPorArchivo = (gcnew System::Windows::Forms::Button());
			this->button_desmarcar = (gcnew System::Windows::Forms::Button());
			this->button_marcar = (gcnew System::Windows::Forms::Button());
			this->button_importar = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button_buscarPorNombre = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button_salir = (gcnew System::Windows::Forms::Button());
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::LightGray;
			this->groupBox4->Controls->Add(this->button_exportarListado);
			this->groupBox4->Controls->Add(this->button_seleccion_faltantes);
			this->groupBox4->Controls->Add(this->button_seleccion_repetidas);
			this->groupBox4->Controls->Add(this->button_noRepetidas);
			this->groupBox4->Controls->Add(this->button_repetidas);
			this->groupBox4->Controls->Add(this->button_filtrarPorSeleccion);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->textBox9);
			this->groupBox4->Controls->Add(this->textBox10);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(831, 18);
			this->groupBox4->Margin = System::Windows::Forms::Padding(4);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(4);
			this->groupBox4->Size = System::Drawing::Size(373, 695);
			this->groupBox4->TabIndex = 19;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Filtrador de Estampas";
			// 
			// button_exportarListado
			// 
			this->button_exportarListado->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exportarListado->Location = System::Drawing::Point(30, 637);
			this->button_exportarListado->Name = L"button_exportarListado";
			this->button_exportarListado->Size = System::Drawing::Size(313, 36);
			this->button_exportarListado->TabIndex = 27;
			this->button_exportarListado->Text = L"Exportar listado";
			this->button_exportarListado->UseVisualStyleBackColor = true;
			this->button_exportarListado->Click += gcnew System::EventHandler(this, &MyForm::button_exportarListado_Click);
			// 
			// button_seleccion_faltantes
			// 
			this->button_seleccion_faltantes->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_seleccion_faltantes->Location = System::Drawing::Point(190, 582);
			this->button_seleccion_faltantes->Name = L"button_seleccion_faltantes";
			this->button_seleccion_faltantes->Size = System::Drawing::Size(153, 49);
			this->button_seleccion_faltantes->TabIndex = 27;
			this->button_seleccion_faltantes->Text = L"Seleccion y faltantes";
			this->button_seleccion_faltantes->UseVisualStyleBackColor = true;
			this->button_seleccion_faltantes->Click += gcnew System::EventHandler(this, &MyForm::button_seleccion_faltantes_Click);
			// 
			// button_seleccion_repetidas
			// 
			this->button_seleccion_repetidas->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_seleccion_repetidas->Location = System::Drawing::Point(30, 582);
			this->button_seleccion_repetidas->Name = L"button_seleccion_repetidas";
			this->button_seleccion_repetidas->Size = System::Drawing::Size(153, 49);
			this->button_seleccion_repetidas->TabIndex = 27;
			this->button_seleccion_repetidas->Text = L"Seleccion y repetidas";
			this->button_seleccion_repetidas->UseVisualStyleBackColor = true;
			this->button_seleccion_repetidas->Click += gcnew System::EventHandler(this, &MyForm::button_seleccion_repetidas_Click);
			// 
			// button_noRepetidas
			// 
			this->button_noRepetidas->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_noRepetidas->Location = System::Drawing::Point(190, 540);
			this->button_noRepetidas->Name = L"button_noRepetidas";
			this->button_noRepetidas->Size = System::Drawing::Size(153, 36);
			this->button_noRepetidas->TabIndex = 29;
			this->button_noRepetidas->Text = L"No repetidas";
			this->button_noRepetidas->UseVisualStyleBackColor = true;
			this->button_noRepetidas->Click += gcnew System::EventHandler(this, &MyForm::button_noRepetidas_Click);
			// 
			// button_repetidas
			// 
			this->button_repetidas->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_repetidas->Location = System::Drawing::Point(30, 540);
			this->button_repetidas->Name = L"button_repetidas";
			this->button_repetidas->Size = System::Drawing::Size(153, 36);
			this->button_repetidas->TabIndex = 28;
			this->button_repetidas->Text = L"Repetidas";
			this->button_repetidas->UseVisualStyleBackColor = true;
			this->button_repetidas->Click += gcnew System::EventHandler(this, &MyForm::button_repetidas_Click);
			// 
			// button_filtrarPorSeleccion
			// 
			this->button_filtrarPorSeleccion->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_filtrarPorSeleccion->Location = System::Drawing::Point(141, 442);
			this->button_filtrarPorSeleccion->Name = L"button_filtrarPorSeleccion";
			this->button_filtrarPorSeleccion->Size = System::Drawing::Size(202, 36);
			this->button_filtrarPorSeleccion->TabIndex = 27;
			this->button_filtrarPorSeleccion->Text = L"Filtrar por seleccion";
			this->button_filtrarPorSeleccion->UseVisualStyleBackColor = true;
			this->button_filtrarPorSeleccion->Click += gcnew System::EventHandler(this, &MyForm::button_filtrarPorSeleccion_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(30, 40);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(313, 41);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Cartas Filtradas";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(30, 499);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(313, 32);
			this->textBox9->TabIndex = 10;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(30, 86);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox10->Size = System::Drawing::Size(313, 349);
			this->textBox10->TabIndex = 2;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::LightGray;
			this->groupBox3->Controls->Add(this->button_buscarPorCodigo);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(447, 244);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(350, 177);
			this->groupBox3->TabIndex = 21;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Buscador de estampas por codigo";
			// 
			// button_buscarPorCodigo
			// 
			this->button_buscarPorCodigo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_buscarPorCodigo->Location = System::Drawing::Point(16, 84);
			this->button_buscarPorCodigo->Name = L"button_buscarPorCodigo";
			this->button_buscarPorCodigo->Size = System::Drawing::Size(178, 36);
			this->button_buscarPorCodigo->TabIndex = 24;
			this->button_buscarPorCodigo->Text = L"Buscar estampa";
			this->button_buscarPorCodigo->UseVisualStyleBackColor = true;
			this->button_buscarPorCodigo->Click += gcnew System::EventHandler(this, &MyForm::button_buscarPorCodigo_Click);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(205, 45);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(126, 32);
			this->textBox5->TabIndex = 15;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(17, 43);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(177, 32);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Ingrese codigo";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(205, 88);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(126, 64);
			this->textBox6->TabIndex = 17;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::LightGray;
			this->groupBox2->Controls->Add(this->button_contarMarcadas);
			this->groupBox2->Controls->Add(this->button_contarFaltantes);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(447, 47);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(350, 168);
			this->groupBox2->TabIndex = 20;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Contador de Faltantes";
			// 
			// button_contarMarcadas
			// 
			this->button_contarMarcadas->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_contarMarcadas->Location = System::Drawing::Point(16, 103);
			this->button_contarMarcadas->Name = L"button_contarMarcadas";
			this->button_contarMarcadas->Size = System::Drawing::Size(172, 36);
			this->button_contarMarcadas->TabIndex = 25;
			this->button_contarMarcadas->Text = L"Contar marcadas";
			this->button_contarMarcadas->UseVisualStyleBackColor = true;
			this->button_contarMarcadas->Click += gcnew System::EventHandler(this, &MyForm::button_contarMarcadas_Click);
			// 
			// button_contarFaltantes
			// 
			this->button_contarFaltantes->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_contarFaltantes->Location = System::Drawing::Point(17, 53);
			this->button_contarFaltantes->Name = L"button_contarFaltantes";
			this->button_contarFaltantes->Size = System::Drawing::Size(172, 36);
			this->button_contarFaltantes->TabIndex = 24;
			this->button_contarFaltantes->Text = L"Contar faltantes";
			this->button_contarFaltantes->UseVisualStyleBackColor = true;
			this->button_contarFaltantes->Click += gcnew System::EventHandler(this, &MyForm::button_contarFaltantes_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(205, 103);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 36);
			this->textBox4->TabIndex = 13;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(205, 53);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 36);
			this->textBox3->TabIndex = 10;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::LightGray;
			this->groupBox1->Controls->Add(this->button_marcarPorArchivo);
			this->groupBox1->Controls->Add(this->button_desmarcar);
			this->groupBox1->Controls->Add(this->button_marcar);
			this->groupBox1->Controls->Add(this->button_importar);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(28, 18);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(373, 695);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Cartas";
			// 
			// button_marcarPorArchivo
			// 
			this->button_marcarPorArchivo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_marcarPorArchivo->Location = System::Drawing::Point(32, 633);
			this->button_marcarPorArchivo->Name = L"button_marcarPorArchivo";
			this->button_marcarPorArchivo->Size = System::Drawing::Size(309, 36);
			this->button_marcarPorArchivo->TabIndex = 25;
			this->button_marcarPorArchivo->Text = L"Marcar por archivo";
			this->button_marcarPorArchivo->UseVisualStyleBackColor = true;
			this->button_marcarPorArchivo->Click += gcnew System::EventHandler(this, &MyForm::button_marcarPorArchivo_Click);
			// 
			// button_desmarcar
			// 
			this->button_desmarcar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_desmarcar->Location = System::Drawing::Point(32, 591);
			this->button_desmarcar->Name = L"button_desmarcar";
			this->button_desmarcar->Size = System::Drawing::Size(309, 36);
			this->button_desmarcar->TabIndex = 24;
			this->button_desmarcar->Text = L"Desmarcar";
			this->button_desmarcar->UseVisualStyleBackColor = true;
			this->button_desmarcar->Click += gcnew System::EventHandler(this, &MyForm::button_desmarcar_Click);
			// 
			// button_marcar
			// 
			this->button_marcar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_marcar->Location = System::Drawing::Point(32, 549);
			this->button_marcar->Name = L"button_marcar";
			this->button_marcar->Size = System::Drawing::Size(309, 36);
			this->button_marcar->TabIndex = 23;
			this->button_marcar->Text = L"Marcar";
			this->button_marcar->UseVisualStyleBackColor = true;
			this->button_marcar->Click += gcnew System::EventHandler(this, &MyForm::button_marcar_Click);
			// 
			// button_importar
			// 
			this->button_importar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_importar->Location = System::Drawing::Point(179, 442);
			this->button_importar->Name = L"button_importar";
			this->button_importar->Size = System::Drawing::Size(162, 36);
			this->button_importar->TabIndex = 22;
			this->button_importar->Text = L"Importar Cartas";
			this->button_importar->UseVisualStyleBackColor = true;
			this->button_importar->Click += gcnew System::EventHandler(this, &MyForm::button_importar_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(32, 499);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(309, 43);
			this->textBox2->TabIndex = 10;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(28, 40);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(313, 41);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Cartas Actuales";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(28, 86);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(313, 349);
			this->textBox1->TabIndex = 2;
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::LightGray;
			this->groupBox5->Controls->Add(this->button_buscarPorNombre);
			this->groupBox5->Controls->Add(this->textBox8);
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Controls->Add(this->textBox7);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(447, 449);
			this->groupBox5->Margin = System::Windows::Forms::Padding(4);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(4);
			this->groupBox5->Size = System::Drawing::Size(350, 177);
			this->groupBox5->TabIndex = 26;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Buscador de estampas por nombre";
			// 
			// button_buscarPorNombre
			// 
			this->button_buscarPorNombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_buscarPorNombre->Location = System::Drawing::Point(15, 83);
			this->button_buscarPorNombre->Name = L"button_buscarPorNombre";
			this->button_buscarPorNombre->Size = System::Drawing::Size(180, 36);
			this->button_buscarPorNombre->TabIndex = 25;
			this->button_buscarPorNombre->Text = L"Buscar estampa";
			this->button_buscarPorNombre->UseVisualStyleBackColor = true;
			this->button_buscarPorNombre->Click += gcnew System::EventHandler(this, &MyForm::button_buscarPorNombre_Click);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(205, 83);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(126, 71);
			this->textBox8->TabIndex = 22;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Black;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label10->Location = System::Drawing::Point(17, 41);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(178, 32);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Ingrese nombre";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(205, 41);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(126, 34);
			this->textBox7->TabIndex = 20;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button_salir
			// 
			this->button_salir->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_salir->Location = System::Drawing::Point(447, 644);
			this->button_salir->Name = L"button_salir";
			this->button_salir->Size = System::Drawing::Size(350, 36);
			this->button_salir->TabIndex = 26;
			this->button_salir->Text = L"Salir del album";
			this->button_salir->UseVisualStyleBackColor = true;
			this->button_salir->Click += gcnew System::EventHandler(this, &MyForm::button_salir_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1230, 737);
			this->Controls->Add(this->button_salir);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_importar_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "spanish");
		//Lectura del Archivo
		Ordenes.LeerArchivo("Cartas.txt");
		std::string Mostrar = "";
		Mostrar = Ordenes.ImprimirCartas();
		textBox1->Text = gcnew String(Mostrar.c_str());
	}

	private: System::Void button_marcar_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "spanish");
		std::string rep = "";
		textBox1->Text = gcnew String(rep.c_str());
		msclr::interop::marshal_context context;
		std::string cartamarcar = context.marshal_as<std::string>(textBox2->Text);
		Ordenes.Marcar(cartamarcar);
		std::string Mostrar = "";
		Mostrar = Ordenes.ImprimirCartas();
		textBox1->Text = gcnew String(Mostrar.c_str());
	}


	private: System::Void button_desmarcar_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "spanish");
		std::string rep = "";
		textBox1->Text = gcnew String(rep.c_str());
		msclr::interop::marshal_context context;
		std::string cartamarcar = context.marshal_as<std::string>(textBox2->Text);
		Ordenes.DesMarcar(cartamarcar);
		std::string Mostrar = "";
		Mostrar = Ordenes.ImprimirCartas();
		textBox1->Text = gcnew String(Mostrar.c_str());
	}


	private: System::Void button_marcarPorArchivo_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "spanish");
		//Lectura del Archivo
		Ordenes.MarcarArchivo("CartasListas.txt");
		std::string Mostrar = "";
		Mostrar = Ordenes.ImprimirCartas();
		textBox1->Text = gcnew String(Mostrar.c_str());
	}


	private: System::Void button_contarFaltantes_Click(System::Object^ sender, System::EventArgs^ e) {
		int faltantes = Ordenes.Faltantes();
		String^ fal = Convert::ToString(faltantes);
		msclr::interop::marshal_context context;
		string repe = context.marshal_as<std::string>(fal);
		textBox3->Text = gcnew String(repe.c_str());
	}


	private: System::Void button_contarMarcadas_Click(System::Object^ sender, System::EventArgs^ e) {
		int marcadas = Ordenes.Marcadas();
		String^ mar = Convert::ToString(marcadas);
		msclr::interop::marshal_context context;
		string marc = context.marshal_as<std::string>(mar);
		textBox4->Text = gcnew String(marc.c_str());
	}


	private: System::Void button_buscarPorCodigo_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "spanish");

		msclr::interop::marshal_context context;
		std::string buscacod = context.marshal_as<std::string>(textBox5->Text);
		string carta = Ordenes.BuscarCodigo(buscacod);
		textBox6->Text = gcnew String(carta.c_str());
	}


	private: System::Void button_buscarPorNombre_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "spanish");

		msclr::interop::marshal_context context;
		std::string buscacod = context.marshal_as<std::string>(textBox7->Text);
		string carta = Ordenes.BuscarNombre(buscacod);
		textBox8->Text = gcnew String(carta.c_str());
	}


	private: System::Void button_filtrarPorSeleccion_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "spanish");

		msclr::interop::marshal_context context;
		std::string listadoseleccion = context.marshal_as<std::string>(textBox9->Text);
		string listadorep = Ordenes.ListadoSeleccion(listadoseleccion);
		textBox10->Text = gcnew String(listadorep.c_str());
	}


	private: System::Void button_repetidas_Click(System::Object^ sender, System::EventArgs^ e) {
		string listadorep = Ordenes.ListadoRepetidas();
		textBox10->Text = gcnew String(listadorep.c_str());
	}


	private: System::Void button_noRepetidas_Click(System::Object^ sender, System::EventArgs^ e) {
		string listadorep = Ordenes.ListadoFaltantes();
		textBox10->Text = gcnew String(listadorep.c_str());
	}


	private: System::Void button_seleccion_repetidas_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string listadoseleccion = context.marshal_as<std::string>(textBox9->Text);
		string listadorep = Ordenes.ListadoSeleccionRep(listadoseleccion);
		textBox10->Text = gcnew String(listadorep.c_str());
	}


	private: System::Void button_seleccion_faltantes_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string listadoseleccion = context.marshal_as<std::string>(textBox9->Text);
		string listadorep = Ordenes.ListadoSeleccionFal(listadoseleccion);
		textBox10->Text = gcnew String(listadorep.c_str());
	}


	private: System::Void button_exportarListado_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "spanish");
		msclr::interop::marshal_context context;
		string data = context.marshal_as<std::string>(textBox10->Text);
		Ordenes.ExportarArchivo("listadoexp.txt", data);
	}


	private: System::Void button_salir_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
