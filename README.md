# LR2_2
Лабораторная работа 2, 2 семестр

Дан класс (например, с именем Vector), задающий вектор размерности n. Поля класса: указатель на массив, задающий вектор
(тип элемента int или double в зависимости от варианта), массив должен создаваться динамически, число элементов (размерность) вектора
(тип int). Класс включает: конструктор без параметров, задающий пустой вектор (число элементов равно 0), конструктор, создающий объект
вектор на основе обычного одномерного массива размерности n, конструктор копирования, конструктор перемещения, деструктор.
Необходимо перегрузить операции и продемонстрировать их работу. Перегрузить операцию [] (обращение к элементу вектора по индексу) и 
операцию = (копирование вектора или создание копии вектора), а также операцию вставки (<<) объекта в поток cout  или в файл (объект класса
ostream) и операцию извлечения (>>) объекта из потока cin или из файла (объект класса istream). Также продемонстрировать разницу между
конструктором копирования и конструктором перемещения. 
При выполнении работы все входные данные читаются из текстового файла input.txt (создать этот файл любым текстовым редактором), результаты
выводятся в файл output.txt. В отчете представить содержимое этих файлов.
Перегрузить + , на выходе вектор, длина которого равна сумме длин первого вектора и массива(длина массива равна длине вектора, заданным
объектом класса). Сначала идут элементы первого вектора, затем массива.