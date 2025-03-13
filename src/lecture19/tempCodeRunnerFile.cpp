cout<<b.back()<endl;

    cout<<"before pop"<<endl;
    for (int i = 0; i < b.size(); i++){
        cout<<b.at(i)<<endl;
        }
    
    cout<<"after pop"<<endl;
    b.pop_back();
     for (int i = 0; i < b.size(); i++){
        cout<<b.at(i)<<endl;
        }