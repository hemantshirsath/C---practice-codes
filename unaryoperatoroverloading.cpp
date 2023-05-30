   void operator++()
    {
        cout << "Enter c for computer branch " << endl;
        cout << "Enter m for mechanical branch " << endl;
        cout << "Enter i for IT branch " << endl;
        cout << "Enter e for electrical branch " << endl;
        cout << "Enter your choice " << endl;
        cin >> ch;
        if (ch == 'C' || ch == 'c')
        {
            c++;
            t++;
        }
        else if (ch == 'M' || ch == 'm')
        {
            m++;
            t++;
        }
        else if (ch == 'i' || ch == 'I')
        {
            i++;
            t++;
        }
        else if (ch == 'e' || ch == 'E')
        {
            e++;
            t++;
        }
    }