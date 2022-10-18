using System;
using Blog.Models;
using Blog.Repositories;

namespace Blog.Tela.CategoriaTela
{
    public static class ListCategoriaTela
    {
        public static void Load()
        {
            // Console.Clear();l
            Console.WriteLine("Lista de Categorias");
            Console.WriteLine("-------------");
            List();
            Console.ReadKey();
            MenuCategoriaTela.Load();
        }

        private static void List()
        {
            var repository = new Repository<Categoria>(Database.Connection);
            var Categorias = repository.Get();

            foreach (var Categoria in Categorias)
            Console.WriteLine($"Titulo:{Categoria.Titulo} | Descrição:{Categoria.Descricao}");          
        }
    }
}