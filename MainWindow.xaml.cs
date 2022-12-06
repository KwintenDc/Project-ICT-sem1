using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.IO.Ports;
using System.Windows.Markup;
using System.Diagnostics;

namespace Project_ICT_sem1
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        SerialPort _serialPort;
        public MainWindow()
        {
            InitializeComponent();

            _serialPort = new SerialPort();

            cbxComPorts.Items.Add("None");
            foreach (string s in SerialPort.GetPortNames())
                cbxComPorts.Items.Add(s);

            sldr.ValueChanged += sldr_ValueChanged;
        }
        private void cmbxCom_SelectionChanged(object sender, SelectionChangedEventArgs e)
        {
            if (_serialPort != null)
            {
                if (cbxComPorts.SelectedItem.ToString() != "None")
                {
                    _serialPort.PortName = cbxComPorts.SelectedItem.ToString();
                    _serialPort.Open();
                }
                else
                    _serialPort.Close();
            }
        }
        private void btnC_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"00{sldr.Value}");
        }

        private void btnD_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"01{sldr.Value}");
        }

        private void btnE_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"02{sldr.Value}");
        }

        private void btnF_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"03{sldr.Value}");
        }

        private void btnG_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"04{sldr.Value}");
        }

        private void btnA_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"05{sldr.Value}");
        }

        private void btnB_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"06{sldr.Value}");
        }

        private void btnCs_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"07{sldr.Value}");
        }

        private void btnDs_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"08{sldr.Value}");
        }

        private void btnFs_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"09{sldr.Value}");
        }
        private void btnGs_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"10{sldr.Value}");
        }
        private void btnAs_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"11{sldr.Value}");
        }
        private void btnC2_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"12{sldr.Value}");
        }
        private void btnD2_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"13{sldr.Value}");
        }
        private void btnE2_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"14{sldr.Value}");
        }
        private void btnF2_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"15{sldr.Value}");
        }
        private void btnG2_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"16{sldr.Value}");
        }
        private void btnA2_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"17{sldr.Value}");
        }
        private void btnB2_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"18{sldr.Value}");
        }
        private void btnCs2_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"19{sldr.Value}");
        }
        private void btnDs2_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"20{sldr.Value}");
        }
        private void btnFs2_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"21{sldr.Value}");
        }
        private void btnGs2_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"22{sldr.Value}");
        }
        private void btnAs2_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"23{sldr.Value}");
        }
        private void btn1_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)                                 
                _serialPort.WriteLine($"24{sldr.Value}");      
        }

        private void btn2_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"25{sldr.Value}");
        }

        private void btn3_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"26{sldr.Value}");
        }
        private void btn4_Click(object sender, RoutedEventArgs e)
        {
            if (_serialPort.IsOpen)
                _serialPort.WriteLine($"27{sldr.Value}");
        }

        // TODO 01 : Zorg voor controle wanneer iets gespeeld wordt. (extra var na de noot doorsturen)

        private void Window_Closing(object sender, System.ComponentModel.CancelEventArgs e)
        {
            _serialPort.Close();
        }
        private void sldr_ValueChanged(object sender, RoutedPropertyChangedEventArgs<double> e)
        {
            lblSldr.Content = $"{sldr.Value} ms";
        }
    }
}