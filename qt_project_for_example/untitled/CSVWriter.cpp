#include "CSVWriter.h"

CSVWriter::CSVWriter(const string& name): newFile(name,ios::app){}
void CSVWriter::write(Staffer& S1)
{
    if (!S1.check_max_id(S1.getID()))
    {QString s = QString::number(S1.getID()) +  ";" +QString::fromStdString(S1.getName()) + ";" + QString::number(S1.getSex())+ ";" +QString::number(S1.getYear());
    newFile<<"\n" + s.toStdString();}
}
