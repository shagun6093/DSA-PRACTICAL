//queue using array

//header files
#include<stdio.h>
#include<stdlib.h>
//enqueue

int queue[100], i, front = -1, rear = -1, n;
void
enqueue ()
{
  int val;
  if (rear == n - 1)
    {
      printf ("overflow  state\n");
    }
  else
    {
      if (front == -1)

	front = 0;

      printf (" Ente number to be inserted in the queue \n");
      scanf ("%d", &val);
      rear++;
      queue[rear] = val;

    }
}


//dequeue

void
dequeue ()
{
  if (front == -1 || front > rear)
    {
      printf ("underflow state\n");
      return;
    }
  else
    {
      printf ("number dequeued is : %d\n", queue[front]);
      front++;
    }

}

//display
void
display ()
{
  int i;
  if (front == -1)
    {
      printf ("queue empty:\n");

    }
  else
    {
      for (i = front; i <= rear; i++)
	{
	  printf ("%d\n", queue[i]);
	}
    }
}

//main 

void
main ()
{
  int choice = 0;

  printf ("enter the total number in the queue\n");
  scanf ("%d", &n);

  printf ("**************queue functions***************\n");
  while (1)
    {
      printf ("1.enqueue \t 2.dequeue\t  3.display\t 4.exit\n");
      scanf ("%d", &choice);

      switch (choice)
	{
	case 1:
	  enqueue ();
	  break;

	case 2:
	  dequeue ();
	  break;

	case 3:
	  display ();
	  break;

	case 4:
	  exit (0);
	  break;


	default:
	  printf ("invalid:\n");
	}
    }
}
