void ver_temporizador(int, int, int);
struct Time
{
  signed short int Segundo, Minuto, Hora;
};

void mostrar_segundos(struct Time *reloj)
{
  const row = 2, col = 13;
  ver_temporizador(row, col, reloj->Segundo);
}

void mostrar_minutos(struct Time *reloj)
{
  const row = 2, col = 10;
  ver_temporizador(row, col, reloj->Minuto);
}

void mostrar_horas(struct Time *reloj)
{
  const row = 2, col = 7;
  ver_temporizador(row, col, reloj->Hora);
}

