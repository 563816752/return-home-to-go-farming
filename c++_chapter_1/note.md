# 笔记
- 循环次数已知的情况用for循环    
- 循环次数无法预知用while  
-  cin>>ctrl+z 可以返回0，同时用了一次cin>>ctrl+z，要用cin.clear();才能重新输出,好像是如果cin的类型和定义类型不同就会返回0；
-  endl // endl是用来 完成换行并刷新缓冲区的
- flush // flush是用来 直接刷新缓冲区的
- ends // ends 则在输入后加上一个空字符，然后再刷新缓冲区
- cout << unitbuf // 这里unitbuf 不执行任何动作，而是设置这个cout输出流 在接下来的每次操作之后都进行刷新缓冲区
- cout << nounitbuf // 这里nounitbuf则是让cout 回到正常的缓冲方式

