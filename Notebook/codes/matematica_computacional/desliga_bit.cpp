int x, i;
cin >> x >> i;
x |= (1 << i); // Primeiro eu ligo o bit, caso ele esteja desligado
x ^= (1 << i); // Depois desligo o bit