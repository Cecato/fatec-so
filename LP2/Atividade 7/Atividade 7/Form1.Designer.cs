namespace Atividade_7
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
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.exercicio1ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.exercicio2ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.exerccio3ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.exercicio4ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.sairToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // menuStrip1
            // 
            this.menuStrip1.BackColor = System.Drawing.Color.Black;
            this.menuStrip1.GripMargin = new System.Windows.Forms.Padding(2, 2, 0, 2);
            this.menuStrip1.ImageScalingSize = new System.Drawing.Size(36, 36);
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.exercicio1ToolStripMenuItem,
            this.exercicio2ToolStripMenuItem,
            this.exerccio3ToolStripMenuItem,
            this.exercicio4ToolStripMenuItem,
            this.sairToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(1364, 60);
            this.menuStrip1.TabIndex = 0;
            this.menuStrip1.Text = "menuStrip1";
            this.menuStrip1.ItemClicked += new System.Windows.Forms.ToolStripItemClickedEventHandler(this.menuStrip1_ItemClicked);
            // 
            // exercicio1ToolStripMenuItem
            // 
            this.exercicio1ToolStripMenuItem.Font = new System.Drawing.Font("Arial Narrow", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.exercicio1ToolStripMenuItem.ForeColor = System.Drawing.Color.White;
            this.exercicio1ToolStripMenuItem.Name = "exercicio1ToolStripMenuItem";
            this.exercicio1ToolStripMenuItem.Size = new System.Drawing.Size(235, 56);
            this.exercicio1ToolStripMenuItem.Text = "Exercicio 1";
            this.exercicio1ToolStripMenuItem.Click += new System.EventHandler(this.exercicio1ToolStripMenuItem_Click);
            // 
            // exercicio2ToolStripMenuItem
            // 
            this.exercicio2ToolStripMenuItem.Font = new System.Drawing.Font("Arial Narrow", 14.25F, System.Drawing.FontStyle.Bold);
            this.exercicio2ToolStripMenuItem.ForeColor = System.Drawing.Color.White;
            this.exercicio2ToolStripMenuItem.Name = "exercicio2ToolStripMenuItem";
            this.exercicio2ToolStripMenuItem.Size = new System.Drawing.Size(235, 56);
            this.exercicio2ToolStripMenuItem.Text = "Exercicio 2";
            this.exercicio2ToolStripMenuItem.Click += new System.EventHandler(this.exercicio2ToolStripMenuItem_Click);
            // 
            // exerccio3ToolStripMenuItem
            // 
            this.exerccio3ToolStripMenuItem.Font = new System.Drawing.Font("Arial Narrow", 14.25F, System.Drawing.FontStyle.Bold);
            this.exerccio3ToolStripMenuItem.ForeColor = System.Drawing.Color.White;
            this.exerccio3ToolStripMenuItem.Name = "exerccio3ToolStripMenuItem";
            this.exerccio3ToolStripMenuItem.Size = new System.Drawing.Size(235, 56);
            this.exerccio3ToolStripMenuItem.Text = "Exercicio 3";
            this.exerccio3ToolStripMenuItem.Click += new System.EventHandler(this.exerccio3ToolStripMenuItem_Click);
            // 
            // exercicio4ToolStripMenuItem
            // 
            this.exercicio4ToolStripMenuItem.Font = new System.Drawing.Font("Arial Narrow", 14.25F, System.Drawing.FontStyle.Bold);
            this.exercicio4ToolStripMenuItem.ForeColor = System.Drawing.Color.White;
            this.exercicio4ToolStripMenuItem.Name = "exercicio4ToolStripMenuItem";
            this.exercicio4ToolStripMenuItem.Size = new System.Drawing.Size(235, 56);
            this.exercicio4ToolStripMenuItem.Text = "Exercicio 4";
            this.exercicio4ToolStripMenuItem.Click += new System.EventHandler(this.exercicio4ToolStripMenuItem_Click);
            // 
            // sairToolStripMenuItem
            // 
            this.sairToolStripMenuItem.Font = new System.Drawing.Font("Arial Narrow", 14.25F, System.Drawing.FontStyle.Bold);
            this.sairToolStripMenuItem.ForeColor = System.Drawing.Color.White;
            this.sairToolStripMenuItem.Name = "sairToolStripMenuItem";
            this.sairToolStripMenuItem.Size = new System.Drawing.Size(113, 56);
            this.sairToolStripMenuItem.Text = "Sair";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(14F, 29F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(250)))));
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.ClientSize = new System.Drawing.Size(1364, 942);
            this.Controls.Add(this.menuStrip1);
            this.ForeColor = System.Drawing.SystemColors.ControlLightLight;
            this.IsMdiContainer = true;
            this.MainMenuStrip = this.menuStrip1;
            this.Margin = new System.Windows.Forms.Padding(7);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem exercicio1ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem exercicio2ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem exerccio3ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem exercicio4ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem sairToolStripMenuItem;
    }
}

