flowchart TD
    classDef terminator fill:#f9f,stroke:#333,stroke-width:2px;
    classDef process fill:#e1f5fe,stroke:#333,stroke-width:2px;
    classDef decision fill:#fff9c4,stroke:#333,stroke-width:2px;
    classDef inputoutput fill:#e8f5e8,stroke:#333,stroke-width:2px;
    classDef predefined fill:#ffe0b2,stroke:#333,stroke-width:2px;
    classDef loop fill:#e1bee7,stroke:#333,stroke-width:2px,shape:hexagon;

    A([Начало]):::terminator --> B[<b>srand(time(0))</b><br>Инициализация ГСЧ]:::process
    B --> C[<b>MAX_SIZE = 100</b><br><b>n = 10</b><br>Объявление массива arr]:::process
    
    C --> D{<b>for i = 0 to n-1</b>}:::loop
    D --> E[<b>arr[i] = rand() % 20 + 1</b><br>Генерация числа от 1 до 20]:::process
    E --> D
    
    D --> F[/<b>Вывод "Исходный массив:"</b>/]:::inputoutput
    F --> G{<b>for i = 0 to n-1</b>}:::loop
    G --> H[/<b>Вывод arr[i]</b>/]:::inputoutput
    H --> G
    
    G --> I[<b>min_val = arr[0]</b><br>Поиск минимума]:::process
    I --> J{<b>for i = 1 to n-1</b>}:::loop
    J --> K{<b>arr[i] < min_val</b>}:::decision
    K -->|Да| L[<b>min_val = arr[i]</b>]:::process
    L --> J
    K -->|Нет| J
    
    J --> M[<b>new_n = 0</b><br>Удаление минимальных элементов]:::process
    M --> N{<b>for i = 0 to n-1</b>}:::loop
    N --> O{<b>arr[i] != min_val</b>}:::decision
    O -->|Да| P[<b>arr[new_n] = arr[i]</b><br><b>new_n++</b>]:::process
    P --> N
    O -->|Нет| N
    
    N --> Q[<b>n = new_n</b>]:::process
    Q --> R{<b>n > 0</b>}:::decision
    
    R -->|Нет| S[/<b>Вывод "Результат:"</b>/]:::inputoutput
    
    R -->|Да| T[<b>sum = 0</b><br>Вычисление среднего]:::process
    T --> U{<b>for i = 0 to n-1</b>}:::loop
    U --> V[<b>sum += arr[i]</b>]:::process
    V --> U
    
    U --> W[<b>avg = (int)(sum / n)</b><br>Среднее арифметическое]:::process
    W --> X{<b>for i = n-1 to 0</b>}:::loop
    X --> Y[<b>arr[i + 3] = arr[i]</b><br>Сдвиг вправо]:::process
    Y --> X
    
    X --> Z[<b>arr[0] = avg</b><br><b>arr[1] = avg</b><br><b>arr[2] = avg</b>]:::process
    Z --> AA[<b>n += 3</b>]:::process
    AA --> S
    
    S --> AB{<b>for i = 0 to n-1</b>}:::loop
    AB --> AC[/<b>Вывод arr[i]</b>/]:::inputoutput
    AC --> AB
    
    AB --> AD[/<b>Вывод перевода строки</b>/]:::inputoutput
    AD --> AE([Конец]):::terminator