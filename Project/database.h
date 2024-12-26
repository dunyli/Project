#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для database
	/// </summary>
	public ref class database : public System::Windows::Forms::Form
	{
	public:
		database(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_safe;
	public:

	/*Логическая переменная для проверки изменения данных*/
	public: bool save = true;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~database()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_createOrder;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_dataOutput;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_choiceServices;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_search;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_adddata;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_info;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_exit;


	protected:








	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->ToolStripMenuItem_createOrder = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_dataOutput = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_choiceServices = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_search = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_adddata = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_safe = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_info = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip
			// 
			this->menuStrip->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->ToolStripMenuItem_createOrder,
					this->ToolStripMenuItem_dataOutput, this->ToolStripMenuItem_choiceServices, this->ToolStripMenuItem_search, this->ToolStripMenuItem_adddata,
					this->ToolStripMenuItem_safe, this->ToolStripMenuItem_info, this->ToolStripMenuItem_exit
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(2110, 53);
			this->menuStrip->TabIndex = 0;
			this->menuStrip->Text = L"menuStrip";
			// 
			// ToolStripMenuItem_createOrder
			// 
			this->ToolStripMenuItem_createOrder->Name = L"ToolStripMenuItem_createOrder";
			this->ToolStripMenuItem_createOrder->Size = System::Drawing::Size(282, 49);
			this->ToolStripMenuItem_createOrder->Text = L"Создание заказа";
			// 
			// ToolStripMenuItem_dataOutput
			// 
			this->ToolStripMenuItem_dataOutput->Name = L"ToolStripMenuItem_dataOutput";
			this->ToolStripMenuItem_dataOutput->Size = System::Drawing::Size(252, 49);
			this->ToolStripMenuItem_dataOutput->Text = L"Вывод данных";
			// 
			// ToolStripMenuItem_choiceServices
			// 
			this->ToolStripMenuItem_choiceServices->Name = L"ToolStripMenuItem_choiceServices";
			this->ToolStripMenuItem_choiceServices->Size = System::Drawing::Size(240, 49);
			this->ToolStripMenuItem_choiceServices->Text = L"Выбор услуги";
			// 
			// ToolStripMenuItem_search
			// 
			this->ToolStripMenuItem_search->Name = L"ToolStripMenuItem_search";
			this->ToolStripMenuItem_search->Size = System::Drawing::Size(333, 49);
			this->ToolStripMenuItem_search->Text = L"Поиск информации";
			// 
			// ToolStripMenuItem_adddata
			// 
			this->ToolStripMenuItem_adddata->Name = L"ToolStripMenuItem_adddata";
			this->ToolStripMenuItem_adddata->Size = System::Drawing::Size(338, 49);
			this->ToolStripMenuItem_adddata->Text = L"Добавление данных";
			// 
			// ToolStripMenuItem_safe
			// 
			this->ToolStripMenuItem_safe->Name = L"ToolStripMenuItem_safe";
			this->ToolStripMenuItem_safe->Size = System::Drawing::Size(195, 49);
			this->ToolStripMenuItem_safe->Text = L"Сохранить";
			this->ToolStripMenuItem_safe->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_safe_Click);
			// 
			// ToolStripMenuItem_info
			// 
			this->ToolStripMenuItem_info->Name = L"ToolStripMenuItem_info";
			this->ToolStripMenuItem_info->Size = System::Drawing::Size(162, 49);
			this->ToolStripMenuItem_info->Text = L"Справка";
			this->ToolStripMenuItem_info->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_info_Click);
			// 
			// ToolStripMenuItem_exit
			// 
			this->ToolStripMenuItem_exit->Name = L"ToolStripMenuItem_exit";
			this->ToolStripMenuItem_exit->Size = System::Drawing::Size(224, 49);
			this->ToolStripMenuItem_exit->Text = L"Выход из БД";
			this->ToolStripMenuItem_exit->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_exit_Click);
			// 
			// database
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(2110, 757);
			this->Controls->Add(this->menuStrip);
			this->MainMenuStrip = this->menuStrip;
			this->Name = L"database";
			this->Text = L"База данных";
			this->Load += gcnew System::EventHandler(this, &database::database_Load);
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

/*Обработка нажатия на кнопку ВЫХОД ИЗ БД*/
private: System::Void ToolStripMenuItem_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	/*Если какие-то данные были изменены*/
	if (save == false)
		switch (MessageBox::Show("При выходе из базы данных все несохраненные данные будут потеряны.\nПрименить изменения?", "Внимание", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning)) {
		case System::Windows::Forms::DialogResult::Yes: ToolStripMenuItem_safe_Click(sender, e);  break;
		case System::Windows::Forms::DialogResult::No:break;
		case System::Windows::Forms::DialogResult::Cancel: return;
		}
	Owner->Show();
	this->Hide();
}

/*Обработка закрытия формы на Х*/
private: System::Void work_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	/*Если какие - то данные были изменены */
	if (save == false)
		switch (MessageBox::Show("При выходе из базы данных все несохраненные данные будут потеряны.\nПрименить изменения?", "Внимание", MessageBoxButtons::YesNo, MessageBoxIcon::Warning)) {
		case System::Windows::Forms::DialogResult::Yes: ToolStripMenuItem_safe_Click(sender, e);  break;
		case System::Windows::Forms::DialogResult::No: break;
		}
	Owner->Show();
	this->Hide();
}
/*Обработка нажатия на кнопку Сохранить*/
private: System::Void ToolStripMenuItem_safe_Click(System::Object^ sender, System::EventArgs^ e) {

}

/*Обработка нажатия на кнопку СПРАВКА*/
private: System::Void ToolStripMenuItem_info_Click(System::Object^ sender, System::EventArgs^ e) {
	info^ inf = gcnew info;
	inf->Show();
}

private: System::Void database_Load(System::Object^ sender, System::EventArgs^ e) {
}

};
}
