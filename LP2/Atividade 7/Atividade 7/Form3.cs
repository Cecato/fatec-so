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
    public partial class Form3 : Form
    {
        public Form3()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double n, H;
            n = Convert.ToDouble(textBox1.Text);
            H = 0;
            for (var i = n; i > 0; i--)
            {
                H += 1/i;

            }
            MessageBox.Show("O valor de h é: " + H);
        }
    }
}
