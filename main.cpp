#include <QCoreApplication>
#include "adjacencylistgraph.h"
#include "adjacencylistgraph.cpp"

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  ADjacencyListGraph ad
  {
    {'A',{{'B',34},{'C',4},{'D',24}}},
    {'C',{{'B',34}}},
    {'F',{{'B',34}}}
  };
  //ad.breathFirstTransversal ();
  ad.deepFirstTransversal ();
  return a.exec();
}
