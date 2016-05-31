#include "icmpsendecho2.h"
#include <msclr\marshal_cppstd.h>
#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  PingShow2;
	protected:

	private: System::Windows::Forms::Label^  PingShow1;
	protected:

	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^  Placement;


	private: System::Windows::Forms::ToolStripMenuItem^  Ping1;
	private: System::Windows::Forms::ToolStripMenuItem^  Ping2;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;


	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  Quit;
	private: System::Windows::Forms::ToolStripTextBox^  Adress1;


	private: System::Windows::Forms::ToolStripTextBox^  Adress2;


	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ToolStripMenuItem^  Left_Lower;
	private: System::Windows::Forms::ToolStripMenuItem^  Left_Higher;
	private: System::Windows::Forms::ToolStripMenuItem^  Right_Lower;
	private: System::Windows::Forms::ToolStripMenuItem^  Right_Higher;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripTextBox^  OwnX;
	private: System::Windows::Forms::ToolStripTextBox^  OwnY;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ToolStripMenuItem^  Custom_Placement;
	private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->PingShow2 = (gcnew System::Windows::Forms::Label());
			this->PingShow1 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->Placement = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Left_Lower = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Left_Higher = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Right_Lower = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Right_Higher = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->Custom_Placement = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OwnX = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->OwnY = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->Ping1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Adress1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->Ping2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Adress2 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->Quit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// PingShow2
			// 
			this->PingShow2->AutoSize = true;
			this->PingShow2->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PingShow2->ForeColor = System::Drawing::Color::Coral;
			this->PingShow2->Location = System::Drawing::Point(74, -1);
			this->PingShow2->Name = L"PingShow2";
			this->PingShow2->Size = System::Drawing::Size(105, 15);
			this->PingShow2->TabIndex = 0;
			this->PingShow2->Text = L"Ping GoogleDNS";
			// 
			// PingShow1
			// 
			this->PingShow1->AutoSize = true;
			this->PingShow1->BackColor = System::Drawing::Color::Black;
			this->PingShow1->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PingShow1->ForeColor = System::Drawing::Color::Coral;
			this->PingShow1->Location = System::Drawing::Point(12, -1);
			this->PingShow1->Name = L"PingShow1";
			this->PingShow1->Size = System::Drawing::Size(56, 15);
			this->PingShow1->TabIndex = 1;
			this->PingShow1->Text = L"Ping PL";
			// 
			// contextMenuStrip
			// 
			this->contextMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->Placement,
					this->Ping1, this->Ping2, this->toolStripSeparator1, this->toolStripSeparator2, this->Quit
			});
			this->contextMenuStrip->Name = L"contextMenuStrip";
			this->contextMenuStrip->Size = System::Drawing::Size(131, 104);
			// 
			// Placement
			// 
			this->Placement->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->Left_Lower,
					this->Left_Higher, this->Right_Lower, this->Right_Higher, this->toolStripSeparator3, this->Custom_Placement, this->OwnX, this->OwnY
			});
			this->Placement->Name = L"Placement";
			this->Placement->Size = System::Drawing::Size(130, 22);
			this->Placement->Text = L"Placement";
			// 
			// Left_Lower
			// 
			this->Left_Lower->Name = L"Left_Lower";
			this->Left_Lower->Size = System::Drawing::Size(177, 22);
			this->Left_Lower->Text = L"Left_Lower";
			this->Left_Lower->Click += gcnew System::EventHandler(this, &Form1::Left_Lower_Click);
			// 
			// Left_Higher
			// 
			this->Left_Higher->Name = L"Left_Higher";
			this->Left_Higher->Size = System::Drawing::Size(177, 22);
			this->Left_Higher->Text = L"Left_Higher";
			this->Left_Higher->Click += gcnew System::EventHandler(this, &Form1::Left_Higher_Click);
			// 
			// Right_Lower
			// 
			this->Right_Lower->Name = L"Right_Lower";
			this->Right_Lower->Size = System::Drawing::Size(177, 22);
			this->Right_Lower->Text = L"Right_Lower";
			this->Right_Lower->Click += gcnew System::EventHandler(this, &Form1::Right_Lower_Click);
			// 
			// Right_Higher
			// 
			this->Right_Higher->Name = L"Right_Higher";
			this->Right_Higher->Size = System::Drawing::Size(177, 22);
			this->Right_Higher->Text = L"Right_Higher";
			this->Right_Higher->Click += gcnew System::EventHandler(this, &Form1::Right_Higher_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(174, 6);
			// 
			// Custom_Placement
			// 
			this->Custom_Placement->Name = L"Custom_Placement";
			this->Custom_Placement->Size = System::Drawing::Size(177, 22);
			this->Custom_Placement->Text = L"Custom_Placement";
			// 
			// OwnX
			// 
			this->OwnX->Name = L"OwnX";
			this->OwnX->Size = System::Drawing::Size(100, 23);
			this->OwnX->Text = L"X";
			this->OwnX->TextChanged += gcnew System::EventHandler(this, &Form1::OwnX_TextChanged);
			// 
			// OwnY
			// 
			this->OwnY->Name = L"OwnY";
			this->OwnY->Size = System::Drawing::Size(100, 23);
			this->OwnY->Text = L"Y";
			// 
			// Ping1
			// 
			this->Ping1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Adress1 });
			this->Ping1->Name = L"Ping1";
			this->Ping1->Size = System::Drawing::Size(130, 22);
			this->Ping1->Text = L"Ping1";
			// 
			// Adress1
			// 
			this->Adress1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Adress1->Name = L"Adress1";
			this->Adress1->Size = System::Drawing::Size(100, 23);
			this->Adress1->Text = L"212.77.98.9";
			// 
			// Ping2
			// 
			this->Ping2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Adress2 });
			this->Ping2->Name = L"Ping2";
			this->Ping2->Size = System::Drawing::Size(130, 22);
			this->Ping2->Text = L"Ping2";
			// 
			// Adress2
			// 
			this->Adress2->Name = L"Adress2";
			this->Adress2->Size = System::Drawing::Size(100, 23);
			this->Adress2->Text = L"8.8.8.8";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(127, 6);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(127, 6);
			// 
			// Quit
			// 
			this->Quit->Name = L"Quit";
			this->Quit->Size = System::Drawing::Size(130, 22);
			this->Quit->Text = L"Quit";
			this->Quit->Click += gcnew System::EventHandler(this, &Form1::Quit_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->ContextMenuStrip = this->contextMenuStrip;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button1->Location = System::Drawing::Point(-1, -1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(10, 10);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(139, 14);
			this->ContextMenuStrip = this->contextMenuStrip;
			this->ControlBox = false;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->PingShow1);
			this->Controls->Add(this->PingShow2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->TopMost = true;
			this->TransparencyKey = System::Drawing::Color::Black;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Enter += gcnew System::EventHandler(this, &Form1::Form1_Enter);
			this->Leave += gcnew System::EventHandler(this, &Form1::Form1_Leave);
			this->contextMenuStrip->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Quit_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	
	private:double Parsestring(String^ string) {
			System::Int32 number;

			if (string != "") {
				for (int i = 0; i < string->Length; i++) {
					if (isalpha(string[i]) || ispunct(string[i]) || isspace(string[i])) {
						string = "";
						return 0;
					}
				}
				number = System::Int32::Parse(string);
				if (string->Length > 4) {
					string = "";
					return 0;
				}
				if (System::Int32::Parse(string) < 1)
					return 0;
				if (System::Int32::Parse(string) > 5000)
					return 0;
			}
			else {
				string = "Empty";
				return 0;
			}
			return number;
		}
	private:double ping1;
	private:double ping2;
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	//System::String^ managed = "test";
	//std::string unmanaged = msclr::interop::marshal_as<std::string>(managed);

	ping1 = pinger(msclr::interop::marshal_as<std::string>(Adress1->Text));
	ping2 = pinger(msclr::interop::marshal_as<std::string>(Adress2->Text));

	if (ping1 == -1) {
		PingShow1->ForeColor = System::Drawing::Color::Violet;
		PingShow1->Text = "(1)" + "Error";
	}
	else {
		if (ping1 > 280)
			ping1 = 280;
		PingShow1->ForeColor = Color::FromArgb((307 * ping1) / 220 - (ping1*ping1) / 550, ((ping1*ping1) * 17) / 17600 - (1003 * ping1) / 880 + 255, 0);
		PingShow1->Text = "(1)" + ping1 + "ms";
	}


	if (ping2 == -1) {
		PingShow2->ForeColor = System::Drawing::Color::Violet;
		PingShow2->Text = "(2)" + "Error";
	}
	else {
		if (ping2 > 280)
			ping2 = 280;
		PingShow2->ForeColor = Color::FromArgb((307 * ping2) / 220 - (ping2*ping2) / 550, ((ping2*ping2) * 17) / 17600 - (1003 * ping2) / 880 + 255, 0);
		PingShow2->Text = "(2)" + ping2 + "ms";
	}

}
	int w;
	int h;
private: System::Void OwnX_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Location = Point(Parsestring(OwnX->Text), Parsestring(OwnY->Text));	
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	Custom_Placement->Enabled = false;
}
private: System::Void Left_Lower_Click(System::Object^  sender, System::EventArgs^  e) {
	Drawing::Rectangle resolution = Screen::PrimaryScreen->Bounds;
	h = resolution.Height;
	OwnX->Text = "" + 0;
	OwnY->Text = "" + (h - Size.Height);
	Location = Point(0, h-Size.Height);
}
private: System::Void Left_Higher_Click(System::Object^  sender, System::EventArgs^  e) {
	OwnX->Text = "" + 0;
	OwnY->Text = "" + 0;
	Location = Point(0, 0);
}
private: System::Void Right_Lower_Click(System::Object^  sender, System::EventArgs^  e) {
	Drawing::Rectangle resolution = Screen::PrimaryScreen->Bounds;
	h = resolution.Height;
	w = resolution.Width;
	OwnX->Text = "" + (h - Size.Height);
	OwnY->Text = "" + (w - Size.Width);
	Location = Point(w - Size.Width, h - Size.Height);
}
private: System::Void Right_Higher_Click(System::Object^  sender, System::EventArgs^  e) {
	Drawing::Rectangle resolution = Screen::PrimaryScreen->Bounds;
	w = resolution.Width;
	OwnX->Text = "" + (w - Size.Width);
	OwnY->Text = "" + 0;
	Location = Point(w - Size.Width, 0);
}

private: System::Void Form1_GotFocus(Object sender, EventArgs e) {
}
private: System::Void Form1_Leave(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Form1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
}