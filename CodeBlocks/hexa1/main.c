void decToBin(int n)
{
if(n <= 1)
{
printf("%d", n);
}

else
{
decToBin(n/2);
printf("%d", n%2);
}
}
