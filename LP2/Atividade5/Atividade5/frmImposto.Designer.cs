namespace Atividade5
{
    partial class Form1
    {
        /// <summary>
        /// Variável de designer necessária.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpar os recursos que estão sendo usados.
        /// </summary>
        /// <param name="disposing">true se for necessário descartar os recursos gerenciados; caso contrário, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código gerado pelo Windows Form Designer

        /// <summary>
        /// Método necessário para suporte ao Designer - não modifique 
        /// o conteúdo deste método com o editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.txtNomeFunc = new System.Windows.Forms.TextBox();
            this.btnDesconto = new System.Windows.Forms.Button();
            this.backgroundWorker1 = new System.ComponentModel.BackgroundWorker();
            this.gpbSexo = new System.Windows.Forms.GroupBox();
            this.rdbMulher = new System.Windows.Forms.RadioButton();
            this.rdbHomem = new System.Windows.Forms.RadioButton();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.ccbCasado = new System.Windows.Forms.CheckBox();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.txtSalFamilia = new System.Windows.Forms.TextBox();
            this.txtAliIrpf = new System.Windows.Forms.TextBox();
            this.txtAliInss = new System.Windows.Forms.TextBox();
            this.txtSalLiquido = new System.Windows.Forms.TextBox();
            this.label8 = new System.Windows.Forms.Label();
            this.label9 = new System.Windows.Forms.Label();
            this.txtDescontoInss = new System.Windows.Forms.TextBox();
            this.txtDescontoIrpf = new System.Windows.Forms.TextBox();
            this.mtbNumFilho = new System.Windows.Forms.MaskedTextBox();
            this.mtbSalBruto = new System.Windows.Forms.MaskedTextBox();
            this.gpbSexo.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(26, 25);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(187, 25);
            this.label1.TabIndex = 0;
            this.label1.Text = "Nome Funcionario";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(26, 73);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(136, 25);
            this.label2.TabIndex = 1;
            this.label2.Text = "Salario Bruto";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(26, 124);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(174, 25);
            this.label3.TabIndex = 2;
            this.label3.Text = "Numero de filhos";
            // 
            // txtNomeFunc
            // 
            this.txtNomeFunc.Location = new System.Drawing.Point(245, 19);
            this.txtNomeFunc.Name = "txtNomeFunc";
            this.txtNomeFunc.Size = new System.Drawing.Size(238, 31);
            this.txtNomeFunc.TabIndex = 3;
            // 
            // btnDesconto
            // 
            this.btnDesconto.Location = new System.Drawing.Point(245, 209);
            this.btnDesconto.Name = "btnDesconto";
            this.btnDesconto.Size = new System.Drawing.Size(238, 38);
            this.btnDesconto.TabIndex = 6;
            this.btnDesconto.Text = "Verificar Desconto";
            this.btnDesconto.UseVisualStyleBackColor = true;
            this.btnDesconto.Click += new System.EventHandler(this.btnDesconto_Click);
            // 
            // backgroundWorker1
            // 
            this.backgroundWorker1.DoWork += new System.ComponentModel.DoWorkEventHandler(this.backgroundWorker1_DoWork);
            // 
            // gpbSexo
            // 
            this.gpbSexo.Controls.Add(this.rdbMulher);
            this.gpbSexo.Controls.Add(this.rdbHomem);
            this.gpbSexo.Location = new System.Drawing.Point(567, 25);
            this.gpbSexo.Name = "gpbSexo";
            this.gpbSexo.Size = new System.Drawing.Size(103, 147);
            this.gpbSexo.TabIndex = 7;
            this.gpbSexo.TabStop = false;
            this.gpbSexo.Text = "Sexo";
            // 
            // rdbMulher
            // 
            this.rdbMulher.AutoSize = true;
            this.rdbMulher.Location = new System.Drawing.Point(22, 98);
            this.rdbMulher.Name = "rdbMulher";
            this.rdbMulher.Size = new System.Drawing.Size(61, 29);
            this.rdbMulher.TabIndex = 9;
            this.rdbMulher.TabStop = true;
            this.rdbMulher.Text = "M";
            this.rdbMulher.UseVisualStyleBackColor = true;
            // 
            // rdbHomem
            // 
            this.rdbHomem.AutoSize = true;
            this.rdbHomem.Location = new System.Drawing.Point(21, 44);
            this.rdbHomem.Name = "rdbHomem";
            this.rdbHomem.Size = new System.Drawing.Size(58, 29);
            this.rdbHomem.TabIndex = 8;
            this.rdbHomem.TabStop = true;
            this.rdbHomem.Text = "H";
            this.rdbHomem.UseVisualStyleBackColor = true;
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.ccbCasado);
            this.groupBox2.Location = new System.Drawing.Point(567, 191);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(161, 79);
            this.groupBox2.TabIndex = 8;
            this.groupBox2.TabStop = false;
            // 
            // ccbCasado
            // 
            this.ccbCasado.AutoSize = true;
            this.ccbCasado.Location = new System.Drawing.Point(21, 30);
            this.ccbCasado.Name = "ccbCasado";
            this.ccbCasado.Size = new System.Drawing.Size(118, 29);
            this.ccbCasado.TabIndex = 0;
            this.ccbCasado.Text = "Casado";
            this.ccbCasado.UseVisualStyleBackColor = true;
            this.ccbCasado.CheckedChanged += new System.EventHandler(this.checkBox1_CheckedChanged);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(26, 298);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(144, 25);
            this.label4.TabIndex = 9;
            this.label4.Text = "Aliquota INSS";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(27, 343);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(143, 25);
            this.label5.TabIndex = 10;
            this.label5.Text = "Aliquota IRPF";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(26, 391);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(154, 25);
            this.label6.TabIndex = 11;
            this.label6.Text = "Salário Familia";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(27, 438);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(155, 25);
            this.label7.TabIndex = 12;
            this.label7.Text = "Salário Líquido";
            // 
            // txtSalFamilia
            // 
            this.txtSalFamilia.Location = new System.Drawing.Point(201, 391);
            this.txtSalFamilia.Name = "txtSalFamilia";
            this.txtSalFamilia.ReadOnly = true;
            this.txtSalFamilia.Size = new System.Drawing.Size(184, 31);
            this.txtSalFamilia.TabIndex = 15;
            // 
            // txtAliIrpf
            // 
            this.txtAliIrpf.Location = new System.Drawing.Point(201, 343);
            this.txtAliIrpf.Name = "txtAliIrpf";
            this.txtAliIrpf.ReadOnly = true;
            this.txtAliIrpf.Size = new System.Drawing.Size(184, 31);
            this.txtAliIrpf.TabIndex = 14;
            // 
            // txtAliInss
            // 
            this.txtAliInss.Location = new System.Drawing.Point(201, 298);
            this.txtAliInss.Name = "txtAliInss";
            this.txtAliInss.ReadOnly = true;
            this.txtAliInss.Size = new System.Drawing.Size(184, 31);
            this.txtAliInss.TabIndex = 13;
            // 
            // txtSalLiquido
            // 
            this.txtSalLiquido.Location = new System.Drawing.Point(201, 432);
            this.txtSalLiquido.Name = "txtSalLiquido";
            this.txtSalLiquido.ReadOnly = true;
            this.txtSalLiquido.Size = new System.Drawing.Size(184, 31);
            this.txtSalLiquido.TabIndex = 16;
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(406, 298);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(157, 25);
            this.label8.TabIndex = 17;
            this.label8.Text = "Desconto INSS";
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Location = new System.Drawing.Point(406, 337);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(156, 25);
            this.label9.TabIndex = 18;
            this.label9.Text = "Desconto IRPF";
            // 
            // txtDescontoInss
            // 
            this.txtDescontoInss.Location = new System.Drawing.Point(590, 295);
            this.txtDescontoInss.Name = "txtDescontoInss";
            this.txtDescontoInss.ReadOnly = true;
            this.txtDescontoInss.Size = new System.Drawing.Size(179, 31);
            this.txtDescontoInss.TabIndex = 19;
            // 
            // txtDescontoIrpf
            // 
            this.txtDescontoIrpf.Location = new System.Drawing.Point(590, 337);
            this.txtDescontoIrpf.Name = "txtDescontoIrpf";
            this.txtDescontoIrpf.ReadOnly = true;
            this.txtDescontoIrpf.Size = new System.Drawing.Size(179, 31);
            this.txtDescontoIrpf.TabIndex = 20;
            // 
            // mtbNumFilho
            // 
            this.mtbNumFilho.Location = new System.Drawing.Point(245, 121);
            this.mtbNumFilho.Mask = "00";
            this.mtbNumFilho.Name = "mtbNumFilho";
            this.mtbNumFilho.Size = new System.Drawing.Size(238, 31);
            this.mtbNumFilho.TabIndex = 21;
            this.mtbNumFilho.ValidatingType = typeof(int);
            // 
            // mtbSalBruto
            // 
            this.mtbSalBruto.Location = new System.Drawing.Point(245, 70);
            this.mtbSalBruto.Mask = "00000,00";
            this.mtbSalBruto.Name = "mtbSalBruto";
            this.mtbSalBruto.Size = new System.Drawing.Size(238, 31);
            this.mtbSalBruto.TabIndex = 22;
            this.mtbSalBruto.ValidatingType = typeof(int);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(781, 511);
            this.Controls.Add(this.mtbSalBruto);
            this.Controls.Add(this.mtbNumFilho);
            this.Controls.Add(this.txtDescontoIrpf);
            this.Controls.Add(this.txtDescontoInss);
            this.Controls.Add(this.label9);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.txtSalLiquido);
            this.Controls.Add(this.txtSalFamilia);
            this.Controls.Add(this.txtAliIrpf);
            this.Controls.Add(this.txtAliInss);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.gpbSexo);
            this.Controls.Add(this.btnDesconto);
            this.Controls.Add(this.txtNomeFunc);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "Form1";
            this.Text = "Dados";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.gpbSexo.ResumeLayout(false);
            this.gpbSexo.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtNomeFunc;
        private System.Windows.Forms.Button btnDesconto;
        private System.ComponentModel.BackgroundWorker backgroundWorker1;
        private System.Windows.Forms.GroupBox gpbSexo;
        private System.Windows.Forms.RadioButton rdbMulher;
        private System.Windows.Forms.RadioButton rdbHomem;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.CheckBox ccbCasado;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.TextBox txtSalFamilia;
        private System.Windows.Forms.TextBox txtAliIrpf;
        private System.Windows.Forms.TextBox txtAliInss;
        private System.Windows.Forms.TextBox txtSalLiquido;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.TextBox txtDescontoInss;
        private System.Windows.Forms.TextBox txtDescontoIrpf;
        private System.Windows.Forms.MaskedTextBox mtbNumFilho;
        private System.Windows.Forms.MaskedTextBox mtbSalBruto;
    }
}

