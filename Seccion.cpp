//
// Created by Maria Hilda Bermejo on 6/21/20.
//

#include "Seccion.h"

void Seccion::setALumno(Alumno* pAlumno)
{
  m_ListaAlumno.emplace_back(pAlumno);
}

void Seccion::mostrarDatos()
{
  cout << "\n";
  cout<<"Datos de la seccion"<<endl;
  m_Curso->mostrarDatos();
  m_Profesor->mostrarDatos();
  m_Laboratorio->mostrarDatos();
  cout<<" Dia         :" << m_Dia << endl;
  cout<<" Hora inicio :" << m_HoraInicio<<endl;
  cout<<" Hora fin    :"<< m_HoraFin<< endl;
  //-- se muestran los alumnos
  for (auto& item: m_ListaAlumno)
    item->mostrarDatos();
}



