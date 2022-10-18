using System;
using Blog.Models;
using Blog.Repositories;

namespace Blog.Tela.AlunoCursoTela
{
    public static class ListAlunoCursoTela
    {
        public static void Load()
        {
            // Console.Clear();l
            Console.WriteLine("Lista de AlunoCursos");
            Console.WriteLine("-------------");
            List();
            Console.ReadKey();
            MenuAlunoCursoTela.Load();
        }

        private static void List()
        {
            var repository = new Repository<AlunoCurso>(Database.Connection);
            var AlunoCursos = repository.Get();

            foreach (var AlunoCurso in AlunoCursos)
            Console.WriteLine($"Progresso:{AlunoCurso.Progresso}");
        }
    }
}