#pragma once
#include "TCubicSpline.h"
#include <math.h>

namespace spline_interpolation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;

















































































private: System::Windows::Forms::Label^  status;



	private: double *x, *y;

private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::TextBox^  x1;
private: System::Windows::Forms::Button^  button1;

private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::TextBox^  textBox3;














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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->status = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->x1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(309, 13);
			this->chart1->Margin = System::Windows::Forms::Padding(4);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 2;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::SeaGreen;
			series1->Legend = L"Legend1";
			series1->Name = L"Сплайн";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series2->Color = System::Drawing::Color::Red;
			series2->LabelForeColor = System::Drawing::Color::Bisque;
			series2->Legend = L"Legend1";
			series2->MarkerSize = 8;
			series2->Name = L"Точки";
			series2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::BrightPastel;
			series3->BorderWidth = 2;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Функция";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(1311, 784);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// status
			// 
			this->status->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->status->AutoSize = true;
			this->status->Location = System::Drawing::Point(16, 796);
			this->status->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(152, 17);
			this->status->TabIndex = 2;
			this->status->Text = L"Готово к выполнению";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 45);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Point number:";
			// 
			// x1
			// 
			this->x1->Location = System::Drawing::Point(183, 91);
			this->x1->Margin = System::Windows::Forms::Padding(4);
			this->x1->Name = L"x1";
			this->x1->Size = System::Drawing::Size(48, 22);
			this->x1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 207);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(173, 28);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(8, 91);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(120, 23);
			this->label18->TabIndex = 5;
			this->label18->Text = L"Segment start:";
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(21, 449);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(171, 28);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Clear All";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label37->Location = System::Drawing::Point(20, 513);
			this->label37->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(81, 23);
			this->label37->TabIndex = 7;
			this->label37->Text = L"Function:";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"sin(x)", L"cos(x)" });
			this->comboBox1->Location = System::Drawing::Point(21, 540);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 24);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(17, 581);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(52, 21);
			this->label19->TabIndex = 10;
			this->label19->Text = L"Error:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(16, 635);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(85, 21);
			this->label21->TabIndex = 10;
			this->label21->Text = L"Max error:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Location = System::Drawing::Point(21, 602);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(18, 19);
			this->label20->TabIndex = 11;
			this->label20->Text = L"0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->Location = System::Drawing::Point(21, 656);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(18, 19);
			this->label22->TabIndex = 11;
			this->label22->Text = L"0";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label37);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->x1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(4, 3);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(297, 827);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(183, 47);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(48, 22);
			this->textBox3->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(8, 271);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 23);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Step value:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(141, 273);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(48, 22);
			this->textBox2->TabIndex = 14;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(183, 145);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(48, 22);
			this->textBox1->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 143);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 23);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Segment end:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1633, 826);
			this->Controls->Add(this->status);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Сплайн-интерполяция - кубический сплайн";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::String^ parseSpline(segment seg)
		{
			System::String ^str = gcnew System::String("");
			double tmp3 = seg.coeff3;
			double tmp2 = seg.coeff2 - seg.coeff3 * 3 * seg.x1;
			double tmp1 = seg.coeff1 - seg.coeff2 * 2 * seg.x1 
				+ seg.coeff3 * 3 * seg.x1 * seg.x1;
			double tmp0 = seg.coeff0 - seg.coeff1 * seg.x1 + seg.coeff2 * seg.x1 * seg.x1
				- seg.coeff3 * seg.x1 * seg.x1 * seg.x1;
			if (tmp3 != 0)
			{
				if (tmp3 != 1.0)
					str += Convert::ToString(Math::Round(tmp3,2));
				str += Convert::ToString("x^3 ");
			}
			if (tmp2 != 0)
			{
				if (tmp2 > 0)
					str += Convert::ToString("+ ");
				if (tmp2 != 1.0)
					str += Convert::ToString(Math::Round(tmp2,2));
				str += Convert::ToString("x^2 ");
			}
			if (tmp1 != 0)
			{
				if (tmp1 > 0)
					str += Convert::ToString("+ ");
				if (tmp1 != 1.0)
					str += Convert::ToString(Math::Round(tmp1,2));
				str += Convert::ToString("x ");
			}
			if (tmp0 != 0)
			{
				if (tmp0 > 0)
					str += Convert::ToString("+ ");
				str += Convert::ToString(Math::Round(tmp0,2));
			}
			if (str == "")
				str += Convert::ToString("0");
			return str;
		}
	private: double func(double val)
	{
		try {
			switch ((int)this->comboBox1->SelectedIndex)
			{
			case 0: return sin(val);
			case 1:	return cos(val);
			}
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Некорректные данные!\nВозможно, не все поля заполнены.\nПроверьте данные и повторите попытку");
			this->status->Text = "Некорректные данные! Возможно, не все поля заполнены. Проверьте данные и повторите попытку";
			return (double)5;
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		double startPoint, endPoint, step;
		int size = Convert::ToInt32(this->textBox3->Text);
		if (size <= 0) {
			MessageBox::Show("Incorrect number of points!");
			this->status->Text = ("Incorrect number of points!");
		}
		if (x != nullptr)
			delete[] x;
		if (y != nullptr)
			delete[] y;

		x = new double[size];
		y = new double[size];

		try {
				startPoint = Convert::ToDouble(this->x1->Text);
				endPoint = Convert::ToDouble(this->textBox1->Text);
				if ((endPoint - startPoint) < 0) {
					MessageBox::Show("Incorrect segment!");
				}
				step = (endPoint - startPoint) / size;
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Некорректные данные!\nВозможно, не все поля заполнены.\nПроверьте данные и повторите попытку");
			this->status->Text = "Некорректные данные! Возможно, не все поля заполнены. Проверьте данные и повторите попытку";
			return;
		}

		
		this->textBox2->Text = Convert::ToString(step);

		x[0] = startPoint;
		for (int i = 1; i < size+1; i++) {
			x[i] = startPoint + step * i;
		}

		chart1->Series[L"Сплайн"]->Points->Clear();
		chart1->Series[L"Функция"]->Points->Clear();
		chart1->Series[L"Точки"]->Points->Clear();

		this->status->Text = "Выполняются вычисления";
		for (int i = 0; i < size; i++)
			y[i] = func(x[i]);

		for (int i = 1; i < size; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (x[i] < x[j])
				{
					double tmp_x = x[i], tmp_y = y[i];
					for (int k = i; k > j; k--)
					{
						x[k] = x[k - 1];
						y[k] = y[k - 1];
					}
					x[j] = tmp_x;
					y[j] = tmp_y;
					break;
				}
			}
		}

		for(int i=1;i<size;i++)
			if (x[i - 1] == x[i])
			{
				MessageBox::Show("Некорректные данные!\nНекоторые точки имеют одинаковую координату x.\nПроверьте данные и повторите попытку");
				this->status->Text = "Некоторые точки имеют одинаковую координату x";
				return;
			}

		TCubicSpline* spl = new TCubicSpline();
		spl->MakeSpline(x, y, size);
		
		segment *seg = new segment[size-1];
		spl->GetSpline(seg, size);

		/*switch (size)
		{
		case 8: this->y8->Text = Convert::ToString(y[7]); this->x8->Text = Convert::ToString(x[7]);
		case 7: this->y7->Text = Convert::ToString(y[6]); this->x7->Text = Convert::ToString(x[6]);
		case 6: this->y6->Text = Convert::ToString(y[5]); this->x6->Text = Convert::ToString(x[5]);
		case 5: this->y5->Text = Convert::ToString(y[4]); this->x5->Text = Convert::ToString(x[4]);
		case 4: this->y4->Text = Convert::ToString(y[3]); this->x4->Text = Convert::ToString(x[3]);
			this->y3->Text = Convert::ToString(y[2]); this->x3->Text = Convert::ToString(x[2]);
			this->y2->Text = Convert::ToString(y[1]); this->x2->Text = Convert::ToString(x[1]);
			this->y1->Text = Convert::ToString(y[0]); this->x1->Text = Convert::ToString(x[0]);
		}*/

		this->status->Text="Отрисовка сплайна";
		double spl_val, func_val, err_av = 0, err_max = 0;
		chart1->Series[L"Сплайн"]->Points->Clear();
		double max = x[size - 1];
		for (double i = x[0]; i < max; i += 0.001)
		{
			spl_val = spl->GetY(i);
			func_val = func(i);
			chart1->Series[L"Сплайн"]->Points->AddXY(i, spl_val);
			chart1->Series[L"Функция"]->Points->AddXY(i, func_val);

			err_av += fabs(spl_val - func_val);
			if (err_max < spl_val - func_val)
				err_max = spl_val - func_val;
		}
		for (int i = 0; i < size; i++)
			chart1->Series[L"Точки"]->Points->AddXY(x[i], y[i]);
		err_av *= 0.001 / (max - x[0]);
		this->label20->Text = Convert::ToString(err_av);
		this->label22->Text = Convert::ToString(err_max);
		this->status->Text = "Готово";
	}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	/*switch ((int)(this->numericUpDown1->Value))
	{
	case 4: this->x[5]->Hide(); this->y5->Hide(); //this->spline4->Hide();
	case 5: this->x6->Hide(); this->y6->Hide();// this->spline5->Hide();
	case 6: this->x7->Hide(); this->y7->Hide(); //this->spline6->Hide();
	case 7: this->x8->Hide(); this->y8->Hide(); //this->spline7->Hide();
	}
	switch ((int)(this->numericUpDown1->Value))
	{
	case 8: this->x8->Show(); this->y8->Show(); //this->spline7->Show();
	case 7: this->x7->Show(); this->y7->Show(); //this->spline6->Show();
	case 6: this->x6->Show(); this->y6->Show(); //this->spline5->Show();
	case 5: this->x5->Show(); this->y5->Show(); //this->spline4->Show();
	}
	this->status->Text = "Параметры могли быть изменены! Текущий результат может не соответствовать данным параметрам";*/
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->x1->Text = "";
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->status->Text = "Параметры могли быть изменены! Текущий результат может не соответствовать данным параметрам";
}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		chart1->Series[L"Сплайн"]->Points->Clear();
		chart1->Series[L"Функция"]->Points->Clear();
		chart1->Series[L"Точки"]->Points->Clear();
	/*this->spline7->Text = "0";
	this->spline6->Text = "0";
	this->spline5->Text = "0";
	this->spline4->Text = "0";
	this->spline3->Text = "0";
	this->spline2->Text = "0";
	this->spline1->Text = "0";*/
	button2_Click(sender, e);
	this->label20->Text = "0";
	this->label22->Text = "0";
	this->status->Text = "Готово к выполнению";
}
private: System::Void label18_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
