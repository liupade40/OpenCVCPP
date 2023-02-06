using System.Runtime.InteropServices;
using test;

namespace ConsoleApp1
{

    internal class Program
    {
        [DllImport("Dll1.dll")]
        public static extern void Test1(string path,int flags);
        static unsafe void Main(string[] args)
        {
            //opencv opencv = new opencv();

            //opencv o = new opencv();
            //o.opencvimshow("D:\\gray.jpg", 1);
            //  
            Test1("D:\\gray.jpg", 1);
            Console.WriteLine("Hello, World!");
        }
    }
}