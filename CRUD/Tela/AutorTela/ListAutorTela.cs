using System;
using Blog.Models;
using Blog.Repositories;

namespace Blog.Tela.AutorTela
{
    public static class ListAutorTela
    {
        public static void Load()
        {
            Console.WriteLine("Lista de Autores");
            Console.WriteLine("-------------");
            List();
            Console.ReadKey();
            MenuAutorTela.Load();
        }

        private static void List()
        {
            var repository = new Repository<Autor>(Database.Connection);
            var Autors = repository.Get();

            foreach (var Autor in Autors)
            Console.WriteLine($"Nome:{Autor.Nome} | Bio:{Autor.Bio} | Email:{Autor.Email}");        
        }
    }
}