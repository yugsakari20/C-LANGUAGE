#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("1.hollywood\n");
	printf("2.bollywood\n");
	printf("enter no.\t");
	scanf("%d",&a);

	switch(a)
	{
		case 1:
			printf("hollywood\n");

			printf("1.action\n");
			printf("2.comedy\n");
			printf("3.horror\n");
			printf("4.sci-fi\n");
			printf("enter no.\t");
			scanf("%d",&a);

			switch(a)
			{
				case 1:
					printf("action\n");

					printf("1.lucy\n");
					printf("2.extraction\n");
					printf("3.escape\n");
					printf("4.matrix\n");
					printf("enter no.\t");
					scanf("%d",&a);
					switch(a)
					{
						case 1:
							printf("your movie:lucy");
						break;
						case 2:
							printf("your movie:extraction");
						break;
						case 3:
							printf("your movie:escape");
						break;
						case 4:
							printf("your movie:matrix");
						break;
						default:
							printf("sorry not available");
							scanf("%d",&a);

					}
				break;


				case 2:
					printf("comedy\n");

					printf("1.suits\n");
					printf("2.johnny english\n");
					printf("3.adam project\n");
					printf("4.ted\n");
					printf("enter no.\t");
					scanf("%d",&a);

					switch(a)
					{
						case 1:
							printf("your movie:suits");
						break;
						case 2:
							printf("your movie:johnny english");
						break;
						case 3:
							printf("your movie:dam project");
						break;
						case 4:
							printf("your movie:ted");
						break;
						default:
							printf("sorry not available");
							scanf("%d",&a);
					}
				break;

				case 3:
					printf("horror\n");

					printf("1.it\n");
					printf("2.conjuring\n");
					printf("3.the nun\n");
					printf("4.scream\n");
					printf("enter no.\t");
					scanf("%d",&a);

					switch(a)
					{
						case 1:
							printf("your movie:it");
						break;
						case 2:
							printf("your movie:conjuring");
						break;
						case 3:
							printf("your movie:the nun");
						break;
						case 4:
							printf("your movie:scream");
						break;
						default:
							printf("sorry not available");
							scanf("%d",&a);

					}
				break;

				case 4:
					printf("sci-fi\n");

					printf("1.battleship\n");
					printf("2.transformers\n");
					printf("3.assassian\n");
					printf("4.intrestellar\n");
					printf("enter no.\t");
					scanf("%d",&a);

					switch(a)
					{
						case 1:
							printf("your movie:battleship");
						break;
						case 2:
							printf("your movie:transformer");
						break;
						case 3:
							printf("your movie:assassian");
						break;
						case 4:
							printf("your movie:intrestellar");
						break;
						default:
							printf("sorry not available");
							scanf("%d",&a);
											}
				break;

				default:
					printf("sorry not available");
					scanf("%d",&a);
			}
		break;

		case 2:
			printf("bollywood\n");

			printf("1.action\n");
			printf("2.comedy\n");
			printf("3.horror\n");
			printf("4.sci-fi\n");
			printf("enter no.\t");
			scanf("%d",&a);

			switch(a)
			{
				case 1:
					printf("action\n");

					printf("1.salar\n");
					printf("2.leo\n");
					printf("3.jailer\n");
					printf("4.jawan\n");
					printf("enter no.\t");
					scanf("%d",&a);

					switch(a)
					{
						case 1:
							printf("your movie:salar");
						break;
						case 2:
							printf("your movie:leo");
						break;
						case 3:
							printf("your movie:jailer");
						break;
						case 4:
							printf("your movie:jawan");
						break;
						default:
							printf("sorry not available");
							scanf("%d",&a);
					}
				break;

				case 2:
					printf("comedy\n");

					printf("1.dhamaal\n");
					printf("2.hera pheri\n");
					printf("3.bhagam bhag");
					printf("4.khatta meetha\n");
					printf("enter no.\t");
					scanf("%d",&a);

					switch(a)
					{
						case 1:
							printf("your movie:dhamaal");
						break;
						case 2:
							printf("your movie:hera pheri");
						break;
						case 3:
							printf("your movie:bhagam bhag");
						break;
						case 4:
							printf("your movie:khatta meetha");
						break;
						default:
							printf("sorry not available");
							scanf("%d",&a);
					}
				break;

				case 3:
					printf("horror\n");

					printf("1.1920\n");
					printf("2.laxmii\n");
					printf("3.bhool bhulaiyaa\n");
					printf("4.pari\n");
					printf("enter no.\t");
					scanf("%d",&a);

					switch(a)
					{
						case 1:
							printf("your movie:1920");
						break;
						case 2:
							printf("your movie:laxmii");
						break;
						case 3:
							printf("your movie:bhool bhulaiyaa");
						break;
						case 4:
							printf("your movie:pari");
						break;
						default:
							printf("sorry not available");
							scanf("%d",&a);
					}
				break;

				case 4:
					printf("sci-fi\n");

					printf("1.attack\n");
					printf("2.krrish\n");
					printf("3.shree\n");
					printf("4.robot\n");
					printf("enter no.\t");
					scanf("%d",&a);

					switch(a)
					{
						case 1:
							printf("your movie:attack");
						break;
						case 2:
							printf("your movie:krrish");
						break;
						case 3:
							printf("your movie:shree");
						break;
						case 4:
							printf("your movie:robot");
						break;
						default:
							printf("sorry not available");
							scanf("%d",&a);
					 }

				break;

				default:
					printf("sorry not available");
					scanf("%d",&a);
			}
		break;

		default:
			printf("sorry not available");
			scanf("%d",&a);

	}
	getch();
}






