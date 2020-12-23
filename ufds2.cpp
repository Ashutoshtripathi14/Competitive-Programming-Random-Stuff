struct disjoinset{
  vi comp;
  disjoinsets(int elements){
    comp(elements,-1){}
  }
  void unionset(int a, int b){
    a=repr(a);
    b=repr(b);
    if(a==b){
      return;
    }
    if (-comp[a] < -comp[b]) swap(a, b);
    comp[a] += comp[b];
    comp[b] = a;
  }
  bool is_repr(int x) { return comp[x] < 0; }
  int repr(int x) {
    if(comp[x]<0){
      return x;
    }
    int par=comp[x];
    comp[x]=repr(par);
    return comp[x];
  }
};
