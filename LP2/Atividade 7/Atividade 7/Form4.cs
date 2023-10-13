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
    public partial class Form4 : Form
    {
        public Form4()
        {
            InitializeComponent();
        }

        private void richTextBox1_TextChanged(object sender, EventArgs e)
        {
            
            }

        private void button1_Click(object sender, EventArgs e)
        {
            

            richTextBox1.Text = richTextBox1.Text.Replace(" ","");
            richTextBox1.Text = richTextBox1.Text.ToUpper();
          
            string b = richTextBox1.Text;
            char[] arr = b.ToCharArray();
            Array.Reverse(arr);

            b = "";
            foreach(char c in arr)
            {
                b = b + c.ToString();
            }
            
            if (richTextBox1.Text == b)
            {
                MessageBox.Show("É palindromo");
            } else
            {
                MessageBox.Show("Não é palindromo");
            }
            richTextBox1.Text = b;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            richTextBox1.Text = richTextBox1.Text.Replace(" ", "");
            richTextBox1.Text = richTextBox1.Text.ToUpper();

            string b = richTextBox1.Text;
            char[] arr = b.ToCharArray();
            Array.Reverse(arr);

            b = "";
            foreach (char c in arr)
            {
                b = b + c.ToString();
            }

            if (richTextBox1.Text == b)
            {
                MessageBox.Show("É palindromo");
            }
            else
            {
                MessageBox.Show("Não é palindromo");
            }
            richTextBox1.Text = b;
        }
    }
    }

