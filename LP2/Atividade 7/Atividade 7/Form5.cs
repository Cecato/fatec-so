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
    public partial class Form5 : Form
    {
        public Form5()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {



           
        }

        private void button3_Click(object sender, EventArgs e)
        {
            double s, g, p, a, b, c, d, sb;

            s = Convert.ToDouble(textBox5.Text);
            g = Convert.ToDouble(textBox6.Text);
            p = Convert.ToDouble(textBox4.Text);
            if (p >= 100)
            {
                b = 1;

            }
            else
            {
                b = 0;
            }
            if (p >= 120)
            {
                c = 1;

            }
            else
            {
                c = 0;

            }
            if (p >= 150)
            {
                d = 1;
            }
            else
            {
                d = 0;
            }

            sb = s + s * (0.05 * b + 0.1 * c + 0.1 * d) + g;

            if (sb > 7000)
            {
                if (p >= 150 && g > 0)
                {
                    sb = sb;
                }
                else
                {
                    sb = 7000;
                }

            }



            textBox7.Text = Convert.ToString(sb);
        }
    }
}
