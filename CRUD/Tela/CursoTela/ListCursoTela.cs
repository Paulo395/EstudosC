using System;
using Blog.Models;
using Blog.Repositories;

namespace Blog.Tela.CursoTela
{
    public static class ListCursoTela
    {
        public static void Load()
        {
            Console.WriteLine("Lista de Cursos");
            Console.WriteLine("-------------");
            List();
            Console.ReadKey();
            MenuCursoTela.Load();
        }

        private static void List()
        {
            var repository = new Repository<Curso>(Database.Connection);
            var Cursos = repository.Get();

            foreach (var Curso in Cursos)
                Console.WriteLine($"Titulo:{Curso.Titulo} | Descrição:{Curso.Descricao}");        
        }
    }
}