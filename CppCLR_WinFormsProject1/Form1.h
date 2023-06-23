#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::Diagnostics;
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

	private: System::Diagnostics::Stopwatch^ stopwatch;
	public:
		Form1(void)
		{
			InitializeComponent();
			stopwatch = gcnew System::Diagnostics::Stopwatch();
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

	private: System::Windows::Forms::Button^ open;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ negativeFilter;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ Saturação;
	private: System::Windows::Forms::TextBox^ saturationInput;
	private: System::Windows::Forms::Button^ flip;
	private: System::Windows::Forms::Button^ mirror;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lTimer;

	private: System::Windows::Forms::Button^ btClose;
	private: System::Windows::Forms::Button^ btExit;
	private: System::ComponentModel::IContainer^ components;



	protected:

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
			this->open = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->negativeFilter = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Saturação = (gcnew System::Windows::Forms::Button());
			this->saturationInput = (gcnew System::Windows::Forms::TextBox());
			this->flip = (gcnew System::Windows::Forms::Button());
			this->mirror = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lTimer = (gcnew System::Windows::Forms::Label());
			this->btClose = (gcnew System::Windows::Forms::Button());
			this->btExit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// open
			// 
			this->open->Location = System::Drawing::Point(530, 12);
			this->open->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->open->Name = L"open";
			this->open->Size = System::Drawing::Size(170, 33);
			this->open->TabIndex = 0;
			this->open->Text = L"Open";
			this->open->UseVisualStyleBackColor = true;
			this->open->Click += gcnew System::EventHandler(this, &Form1::open_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(19, 12);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(503, 531);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// negativeFilter
			// 
			this->negativeFilter->Location = System::Drawing::Point(530, 343);
			this->negativeFilter->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->negativeFilter->Name = L"negativeFilter";
			this->negativeFilter->Size = System::Drawing::Size(170, 33);
			this->negativeFilter->TabIndex = 2;
			this->negativeFilter->Text = L"Negative Filter";
			this->negativeFilter->UseVisualStyleBackColor = true;
			this->negativeFilter->Click += gcnew System::EventHandler(this, &Form1::negativeFilter_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(708, 12);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(503, 535);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// Saturação
			// 
			this->Saturação->Location = System::Drawing::Point(530, 417);
			this->Saturação->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Saturação->Name = L"Saturação";
			this->Saturação->Size = System::Drawing::Size(170, 33);
			this->Saturação->TabIndex = 4;
			this->Saturação->Text = L"Saturation";
			this->Saturação->UseVisualStyleBackColor = true;
			this->Saturação->Click += gcnew System::EventHandler(this, &Form1::Saturação_Click);
			// 
			// saturationInput
			// 
			this->saturationInput->Location = System::Drawing::Point(530, 455);
			this->saturationInput->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->saturationInput->Name = L"saturationInput";
			this->saturationInput->Size = System::Drawing::Size(170, 27);
			this->saturationInput->TabIndex = 5;
			this->saturationInput->Text = L"10";
			this->saturationInput->TextChanged += gcnew System::EventHandler(this, &Form1::saturationInput_TextChanged);
			// 
			// flip
			// 
			this->flip->Location = System::Drawing::Point(530, 306);
			this->flip->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->flip->Name = L"flip";
			this->flip->Size = System::Drawing::Size(170, 33);
			this->flip->TabIndex = 6;
			this->flip->Text = L"Flip";
			this->flip->UseVisualStyleBackColor = true;
			this->flip->Click += gcnew System::EventHandler(this, &Form1::flip_Click);
			// 
			// mirror
			// 
			this->mirror->Location = System::Drawing::Point(530, 380);
			this->mirror->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->mirror->Name = L"mirror";
			this->mirror->Size = System::Drawing::Size(170, 33);
			this->mirror->TabIndex = 7;
			this->mirror->Text = L"Mirrored";
			this->mirror->UseVisualStyleBackColor = true;
			this->mirror->Click += gcnew System::EventHandler(this, &Form1::mirror_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(530, 484);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Time in CPU:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// lTimer
			// 
			this->lTimer->AutoSize = true;
			this->lTimer->Location = System::Drawing::Point(530, 513);
			this->lTimer->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lTimer->Name = L"lTimer";
			this->lTimer->Size = System::Drawing::Size(52, 20);
			this->lTimer->TabIndex = 9;
			this->lTimer->Text = L"Timer";
			this->lTimer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lTimer->Click += gcnew System::EventHandler(this, &Form1::lTimer_Click);
			// 
			// btClose
			// 
			this->btClose->Location = System::Drawing::Point(530, 49);
			this->btClose->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->btClose->Name = L"btClose";
			this->btClose->Size = System::Drawing::Size(170, 33);
			this->btClose->TabIndex = 10;
			this->btClose->Text = L"Close";
			this->btClose->UseVisualStyleBackColor = true;
			this->btClose->Click += gcnew System::EventHandler(this, &Form1::btClose_Click);
			// 
			// btExit
			// 
			this->btExit->Location = System::Drawing::Point(530, 86);
			this->btExit->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->btExit->Name = L"btExit";
			this->btExit->Size = System::Drawing::Size(170, 33);
			this->btExit->TabIndex = 11;
			this->btExit->Text = L"Exit";
			this->btExit->UseVisualStyleBackColor = true;
			this->btExit->Click += gcnew System::EventHandler(this, &Form1::btExit_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1546, 707);
			this->Controls->Add(this->btExit);
			this->Controls->Add(this->btClose);
			this->Controls->Add(this->lTimer);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->mirror);
			this->Controls->Add(this->flip);
			this->Controls->Add(this->saturationInput);
			this->Controls->Add(this->Saturação);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->negativeFilter);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->open);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->IsMdiContainer = true;
			this->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->MinimumSize = System::Drawing::Size(1251, 603);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
			this->Text = L"IMPACT LAB  TURMA 3 - PROJETO 02";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void open_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog ^of = gcnew OpenFileDialog();
		//For any other formats
		of->Filter = "Image Files (*.bmp;*.jpg;*.jpeg,*.png)|*.BMP;*.JPG;*.JPEG;*.PNG";
		if (of->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			Bitmap^ imagem = gcnew Bitmap(of->FileName, true);
			
			//pictureBox1->BackgroundImage = imagem;
			//pictureBox1->BackgroundImageLayout = ImageLayout::Stretch;
			//pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;

			pictureBox1->Image = imagem;
			pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		}
	}


	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void negativeFilter_Click(System::Object^ sender, System::EventArgs^ e) {
		stopwatch->Reset();  // Reset the stopwatch before starting a new measurement
		stopwatch->Start();  // Start the stopwatch
		

		//Bitmap^ image = gcnew Bitmap(pictureBox1->BackgroundImage);
		Bitmap^ image = gcnew Bitmap(pictureBox1->Image); // Use pictureBox1->Image instead of pictureBox1->BackgroundImage

		int width = image->Width;
		int height = image->Height;

		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				Color p = image->GetPixel(j,i);
				int A = p.A;
				int r = 255 - p.R;
				int g = 255 - p.G;
				int b = 255 - p.B;

				Color nova = Color::FromArgb(A, r, g, b);
				image->SetPixel(j, i, nova);
			}
		}
		pictureBox2->Image = image;
		pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		//pictureBox2->BackgroundImage = image;
		//pictureBox2->BackgroundImageLayout = ImageLayout::Stretch;
		
		
		stopwatch->Stop();	
		//lTimer->Text = stopwatch->Elapsed.ToString();
		lTimer->Text = stopwatch->Elapsed.TotalMilliseconds * 1000.0 + " µs";

		//lTimer->Text = stopwatch->Elapsed.TotalMilliseconds * 1000.0 + " µs";
		
		

		
	}
private: System::Void Saturação_Click(System::Object^ sender, System::EventArgs^ e) {
	stopwatch->Reset();  // Reset the stopwatch before starting a new measurement
	stopwatch->Start();  // Start the stopwatch

	
	//Bitmap^ image = gcnew Bitmap(pictureBox1->BackgroundImage);
	Bitmap^ image = gcnew Bitmap(pictureBox1->Image); // Use pictureBox1->Image instead of pictureBox1->BackgroundImage

	int width = image->Width;
	int height = image->Height;

	
	if (!String::IsNullOrWhiteSpace(saturationInput->Text))
	{
		float saturation = (float)Convert::ToDouble(saturationInput->Text);

		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				Color p = image->GetPixel(j, i);
				int A = p.A;
				int r = (int)Convert::ToInt32(saturation * p.R);
				int g = (int)Convert::ToInt32(saturation * p.G);
				int b = (int)Convert::ToInt32(saturation * p.B);

				if (r > 255) {
					r = 255;
				}
				if (g > 255) {
					g = 255;
				}
				if (b > 255) {
					b = 255;
				}
				Color nova = Color::FromArgb(A, r, g, b);
				image->SetPixel(j, i, nova);
			}
		}
		pictureBox2->Image = image;
		pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		//pictureBox2->BackgroundImage = image;
		//pictureBox2->BackgroundImageLayout = ImageLayout::Stretch;
	}
	else {
		MessageBox::Show("Please enter a value in the text box.");
	}
	stopwatch->Stop();
	//lTimer->Text = stopwatch->Elapsed.ToString();
	lTimer->Text = stopwatch->Elapsed.TotalMilliseconds * 1000.0 + " µs";
	

}
private: System::Void saturationText_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void saturationInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void flip_Click(System::Object^ sender, System::EventArgs^ e) {
	stopwatch->Reset();  // Reset the stopwatch before starting a new measurement
	stopwatch->Start();  // Start the stopwatch

	//Bitmap^ image = gcnew Bitmap(pictureBox1->BackgroundImage);
	Bitmap^ image = gcnew Bitmap(pictureBox1->Image); // Use pictureBox1->Image instead of pictureBox1->BackgroundImage
	


	int width = image->Width;
	int height = image->Height;


	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width/2; j++) {
			Color p1 = image->GetPixel(j, i);
			Color p2 = image->GetPixel(width - j - 1, i);

			image->SetPixel(j, i, p2);
			image->SetPixel(width - j - 1, i, p1);
		}
	}
	pictureBox2->Image = image;
	pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	/*pictureBox2->BackgroundImage = image;
	pictureBox2->BackgroundImageLayout = ImageLayout::Stretch;*/
	stopwatch->Stop();
	//lTimer->Text = stopwatch->Elapsed.ToString();
	lTimer->Text = stopwatch->Elapsed.TotalMilliseconds * 1000.0 + " µs";

}
private: System::Void mirror_Click(System::Object^ sender, System::EventArgs^ e) {
	stopwatch->Reset();  // Reset the stopwatch before starting a new measurement
	stopwatch->Start();  // Start the stopwatch

	//Bitmap^ image = gcnew Bitmap(pictureBox1->BackgroundImage);
	Bitmap^ image = gcnew Bitmap(pictureBox1->Image); // Use pictureBox1->Image instead of pictureBox1->BackgroundImage

	int width = image->Width;
	int height = image->Height;


	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width / 2; j++) {
			Color p1 = image->GetPixel(j, i);
			Color p2 = image->GetPixel(width - j - 1, i);

			image->SetPixel(j, i, p1);
			image->SetPixel(width - j - 1, i, p1);
		}
	}
	pictureBox2->Image = image;
	pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

	//pictureBox2->BackgroundImage = image;
	//pictureBox2->BackgroundImageLayout = ImageLayout::Stretch;
	stopwatch->Stop();
	//lTimer->Text = stopwatch->Elapsed.ToString();
	lTimer->Text = stopwatch->Elapsed.TotalMilliseconds * 1000.0 + " µs";

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lTimer_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btExit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();

}
private: System::Void btClose_Click(System::Object^ sender, System::EventArgs^ e) {
	
	pictureBox1->Image = nullptr;
	
	pictureBox2->Image = nullptr;
}
};

}
