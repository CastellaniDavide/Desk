function posiziona(N, L: longint; var H: array of longint): longint;
begin
    (* insert your code here *)
    posiziona := 42;
end;


const
    MAXN = 1000000;
var
    N, L, i: longint;
    H      : array[0..MAXN-1] of longint;
    fr, fw : text;

begin
    assign(fr, 'input.txt');
    assign(fw, 'output.txt');
    reset(fr);
    rewrite(fw);
    readln(fr, N, L);
    for i:=0 to N-1 do
        read(fr, H[i]);

    writeln(fw, posiziona(N, L, H));
    close(fr);
    close(fw);
end.
