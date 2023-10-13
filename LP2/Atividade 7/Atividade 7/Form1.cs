using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Atividade_7
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            foreach (Control c in this.Controls)
            {
                if (c is MdiClient)
                {
                    c.BackColor = Color.FromArgb(255, 255, 250);
                }
            }
        }

        private void menuStrip1_ItemClicked(object sender, ToolStripItemClickedEventArgs e)
        {
            
        }

        private void exercicio1ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form fc = Application.OpenForms["FrmExercicio2"];
            if (fc != null)
                fc.Close();
          
            Form Form2 = new Form2();
            Form2.MdiParent = this;
            Form2.WindowState = FormWindowState.Maximized;
            Form2.Show();
        }

        private void exercicio2ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form fc = Application.OpenForms["FrmExercicio3"];
            if (fc != null)
                fc.Close();

            Form Form3 = new Form3();
            Form3.MdiParent = this;
            Form3.WindowState = FormWindowState.Maximized;
            Form3.Show();
        }

        private void exercicio4ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form fc = Application.OpenForms["FrmExercicio3"];
            if (fc != null)
                fc.Close();

            Form Form5 = new Form5();
            Form5.MdiParent = this;
            Form5.WindowState = FormWindowState.Maximized;
            Form5.Show();
        }

        private void exerccio3ToolStripMenuItem_Click(object sender, EventArgs e)
        {
          Form fc = Application.OpenForms["FrmExercicio3"];
            if (fc != null)
                fc.Close();

            Form Form4 = new Form4();
            Form4.MdiParent = this;
            Form4.WindowState = FormWindowState.Maximized;
            Form4.Show();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
