#pragma once 
#include "../include/Map.h"
#include <iostream>
#include "../include/Cell.h"




	void Map::drawDesert(sf::RenderWindow &window) {

		Texture t;
		t.loadFromFile("BG.png");
		Sprite bg;
		bg.setTexture(t);
		bg.setTextureRect(IntRect(0, 280, 1280, 960));
		window.draw(bg);
	
		String TileMap[30] =
		{   "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB",
			"B      F                               B",
			"B                       5555           B",
			"B     50555                    555     B",
			"B                555555                B",
			"BT                                     B",
			"B                                  5555B",
			"B                                      B",
			"B               B              55      B",
			"B             VBBV         55      V   B",
			"B              BB      e        V    W B",
			"B         BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB",
			"BBBBBBBB                       BBBBBBBBB",
			"B                                      B",
			"BV      5555         5555555           B",
			"B                                      B",
			"B55555                                 B",
			"BBBBBB                        5555     B",
			"B              BBBB              B     B",
			"B             BB  B   B    B     B5    B",
			"B             BB     BBB  BBB          B",
			"B             BB  B   B    B           B",
			"B              BBBB                  55B",
			"B                                      B",
			"B  S                             B     B",
			"B                               BB     B",
			"BBBBBBBBBB      BBB            BBB     B",
			"B                             BBBBV VV B",
			"B W      e    V VV           BBBBBW   VB",
			"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB",

		};
		Texture tile6;
		tile6.loadFromFile("assets/6.png");
		tile6.setSmooth(true);
		Sprite st2;
		st2.setTexture(tile6);



		Texture cactus3;
		cactus3.loadFromFile("assets/cac.png");
		cactus3.setSmooth(true);
		Sprite  cac;
		cac.setTexture(cactus3);



		Texture tileE5;
		tileE5.loadFromFile("assets/15.png");
		tileE5.setSmooth(true);
		Sprite e5;
		e5.setTexture(tileE5);


		Texture tree;
		tree.loadFromFile("assets/Tree.png");
		Sprite tree1;
		tree1.setTexture(tree);


		Texture bush;
		bush.loadFromFile("assets/Bush.png");
		Sprite bush1;
		bush1.setTexture(bush);


		Texture bfin;
		bfin.loadFromFile("assets/bfin.png");
		Sprite bfin1;
		bfin1.setTexture(bfin);




		for (int i = 0; i < 30; i++) {
			for (int j = 0; j < 40; j++)
			{
                //brown blocks in desert, can walk on
				if (TileMap[i][j] == 'B') {
					st2.setTextureRect(IntRect(60, 60, 32, 32));
					st2.setPosition(j * 32, i * 32);
					window.draw(st2);
				}
                //cactuses, if you touch you die.
				if (TileMap[i][j] == 'V') {
					cac.setPosition(j * 32, i * 32);
					window.draw(cac);
				}
                //platforms drawn differently
				if (TileMap[i][j] == '5') {

					e5.setTextureRect(IntRect(0, 20, 32, 32));;
					e5.setPosition(j * 32, i * 32);
					window.draw(e5);
				}
				if (TileMap[i][j] == '0') {
					e5.setTextureRect(IntRect(0, 20, 32, 32));;
					e5.setPosition(j * 32, i * 32);
					window.draw(e5);
				}

				if (TileMap[i][j] == 'T') {
					tree1.setPosition(j * 32, i * 32);
					window.draw(tree1);
				}

				if (TileMap[i][j] == 'W') {

					tree1.setTextureRect(IntRect(0, 20, 32, 32));;
					bush1.setPosition(j * 32, i * 32);
					window.draw(bush1);
				}
				if (TileMap[i][j] == 'F') {

					bfin1.setPosition(j * 32, i * 32);
					window.draw(bfin1);
				}

				if (TileMap[i][j] == ' ') continue;


			}
		}





	}
	

	void Map::drawWinter(sf::RenderWindow &window) {

		window.clear(Color(38, 69, 135, 1));
		
		

		Texture t;
		t.loadFromFile("assets/BGwinter.png");
		Sprite bg;
		bg.setTexture(t);
		bg.setTextureRect(IntRect(0, 250, 1200, 900));
		window.draw(bg);

		

		Texture tile6;
		tile6.loadFromFile("assets/6w.png");
		tile6.setSmooth(true);
		Sprite st2;
		st2.setTexture(tile6);

		Texture tileS;
		tileS.loadFromFile("assets/2w.png");
		tileS.setSmooth(true);
		Sprite st3;
		st3.setTexture(tileS);


		Texture tileI;
		tileI.loadFromFile("assets/IceBox.png");
		tileI.setSmooth(true);
		Sprite st4;
		st4.setTexture(tileI);

		Texture water;
		water.loadFromFile("assets/water.png");
		water.setSmooth(true);
		Sprite watr;
		watr.setTexture(water);

		Texture snowman;
		snowman.loadFromFile("assets/Stone.png");
		snowman.setSmooth(true);
		Sprite snow;
		snow.setTexture(snowman);

		Texture treeW;
		treeW.loadFromFile("assets/Treew.png");
		treeW.setSmooth(true);
		Sprite  trW;
		trW.setTexture(treeW);

		Texture  sign;
		sign.loadFromFile("assets/Sign2.png");
		sign.setSmooth(true);
		Sprite  sig;
		sig.setTexture(sign);

		 
		String  TileMap[20]={   "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII",
			"I                                                                                                                                                                                                         I",
			"I                                                                                                                                                                                                         I",
			"I                                                                                                                                                                                                         I",
			"I                                                                                                      SSSSSSS                                                                                            I",
			"I                               SSSSSS                                                                 BBBBBBB                                                                             SSSS           I",
			"I                                                                                                      BBBBBBB                                                                                            I",
			"I                                                                                                SS    BBBBBBB               SSSS     SSSS     SSSS                                                       I", 
			"I                                         SSSSSS                                   SSSSSSSSSS          BBBBBBB               BBBB     BBBB     BBBB                                                       I",
			"I                      SSSSS                                                       BBBBBBBBBB          BBBBBBB               BBBB     BBBB     BBBB                                                       I",
			"I                      BBBBB                                         SSSSSSS       BBBBBBBBBB          BBBBBBB     SSSSS     BBBB     BBBB     BBBB                                                       I",
			"I                      BBBBB                                         BBBBBBB       BBBBBBBBBB          BBBBBBB               BBBBT    BBBBT    BBBB                                                       I",
			"I                      BBBBB                                         BBBBBBB       BBBBBBBBBB          BBBBBBB               BBBB     BBBB     BBBB                                                       I",//1
			"I                 SSSS BBBBB                                         BBBBBBB    M  BBBBBBBBBB M        BBBBBBB               BBBB     BBBB     BBBB                                                       I",//2
			"I              S  BBBB BBBBB                     SSSSSSSSSSSSSSSS    BBBBBBB       BBBBBBBBBB          BBBBBBB               BBBB     BBBB     BBBB                                                     M I",//300
			"I Y        S      BBBB BBBBB                     BBBBBBBBBBBBBBBB    BBBBBBB  SSSSSBBBBBBBBBBSSSSS     BBBBBBB               BBBB     BBBB     BBBB                                               SSSSSSSSI",//400
			"I     S           BBBB BBBBB        SSSSS        BBBBBBBBBBBBBBBB    BBBBBBB  BBBBBBBBBBBBBBBBBBBB     BBBBBBB               BBBB     BBBB     BBBB                                               BBBBBBBBI",// 500
			"SSSSSSSSSSSSWWWWWWSSSSSSSSSSWWWWWWWWSSSSSWWWWWWWWSSSSSSSSSSSSSSSSWWWWSSSSSSSWWSSSSSSSSSSSSSSSSSSSSWWWWWSSSSSSSWWWWWWWWWWWWWWWSSSSSSSSSSSSSSSSSSSSSSSWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWSSSSSSSSI",
			"ssssssssssssWWWWWWssssssssssWWWWWWWWsssssWWWWWWWWssssssssssssssssWWWWsssssssWWssssssssssssssssssssWWWWWsssssssWWWWWWWWWWWWWWWsssssssssssssssssssssssWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWssssssssI",
		};

		for (int i = 0; i < 19; i++) {
			for (int j = 0; j < 203; j++)
			{
                //surface, can collide with b
				if (TileMap[i][j] == 'B') {
					st3.setTextureRect(IntRect(60, 60, 32, 32));
					st3.setPosition(j * 32, i * 32);
					window.draw(st3);

				
				}

                //can walk on s, can collide
				if (TileMap[i][j] == 'S') {
					st3.setTextureRect(IntRect(60, 20, 32, 32));
					st3.setPosition(j * 32, i * 32);
					window.draw(st3);
				}

				if (TileMap[i][j] == 's') {
					st3.setTextureRect(IntRect(60, 60, 32, 32));
					st3.setPosition(j * 32, i * 32);
					window.draw(st3);
				}
                //I is borders
				if (TileMap[i][j] == 'I') {
					st4.setTextureRect(IntRect(60, 60, 32, 32));
					st4.setPosition(j * 32, i * 32);
					window.draw(st4);
				}
                //he dies if he falls into the water, this is water
				if (TileMap[i][j] == 'W') {
					watr.setTextureRect(IntRect(60, 60, 32, 32));
					watr.setPosition(j * 32, i * 32);
					window.draw(watr);
				}
				if (TileMap[i][j] == 'M') {
				
					snow.setPosition(j * 32, i * 32);
					window.draw(snow);
				}

				if (TileMap[i][j] == 'T') {

					trW.setPosition(j * 32, i * 32);
					window.draw(trW);
				}

				if (TileMap[i][j] == 'Y') {
			
					sig.setPosition(j * 32, i * 32);
					window.draw(sig);
				}


			}
		}
	}

	bool Map::collisionS(Player & p) {

		String  TileMap[20] = { "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII",
			"I                                                                                                                                                                                                         I",
			"I                                                                                                                                                                                                         I",
			"I                                                                                                                                                                                                         I",
			"I                                                                                                      SSSSSSS                                                                                            I",
			"I                               SSSSSS                                                                 BBBBBBB                                                                             SSSS           I",
			"I                                                                                                      BBBBBBB                                                                                            I",
			"I                                                                                                SS    BBBBBBB               SSSS     SSSS     SSSS                                                       I",
			"I                                         SSSSSS                                   SSSSSSSSSS          BBBBBBB               BBBB     BBBB     BBBB                                                       I",
			"I                      SSSSS                                                       BBBBBBBBBB          BBBBBBB               BBBB     BBBB     BBBB                                                       I",
			"I                      BBBBB                                         SSSSSSS       BBBBBBBBBB          BBBBBBB     SSSSS     BBBB     BBBB     BBBB                                                       I",
			"I                      BBBBB                                         BBBBBBB       BBBBBBBBBB          BBBBBBB               BBBBT    BBBBT    BBBB                                                       I",
			"I                      BBBBB                                         BBBBBBB       BBBBBBBBBB          BBBBBBB               BBBB     BBBB     BBBB                                                       I",//1
			"I                 SSSS BBBBB                                         BBBBBBB    M  BBBBBBBBBB M        BBBBBBB               BBBB     BBBB     BBBB                                                       I",//2
			"I              S  BBBB BBBBB                     SSSSSSSSSSSSSSSS    BBBBBBB       BBBBBBBBBB          BBBBBBB               BBBB     BBBB     BBBB                                                     M I",//300
			"I Y        S      BBBB BBBBB                     BBBBBBBBBBBBBBBB    BBBBBBB  SSSSSBBBBBBBBBBSSSSS     BBBBBBB               BBBB     BBBB     BBBB                                               BBBBBBBBI",//400
			"I     S           BBBB BBBBB        SSSSS        BBBBBBBBBBBBBBBB    BBBBBBB  BBBBBBBBBBBBBBBBBBBB     BBBBBBB               BBBB     BBBB     BBBB                                               BBBBBBBBI",// 500
			"SSSSSSSSSSSSWWWWWWSSSSSSSSSSWWWWWWWWSSSSSWWWWWWWWSSSSSSSSSSSSSSSSWWWWSSSSSSSWWSSSSSSSSSSSSSSSSSSSSWWWWWSSSSSSSWWWWWWWWWWWWWWWSSSSSSSSSSSSSSSSSSSSSSSWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWSSSSSSSSI",
			"ssssssssssssWWWWWWssssssssssWWWWWWWWsssssWWWWWWWWssssssssssssssssWWWWsssssssWWssssssssssssssssssssWWWWWsssssssWWWWWWWWWWWWWWWsssssssssssssssssssssssWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWssssssssI",
		};

		

		for (int i = 0; i < 19; i++) {
			for (int j = 0; j < 203; j++)
			{
				if (TileMap[i][j] == 'S') {

					return	p.sprite.getPosition().x == j * 32 && p.sprite.getPosition().x == i * 32;

				}
			}
		}
	}



	

	void Map::drawGrave(sf::RenderWindow &window) {}

    //sets the view for the desert, view only shows portion, differerent for each level.
	void Map::setViewDesert(sf::RenderWindow &window, Player & p) {
	  
		
		sf::View viewDesert;

						
		//viewDesert.setSize(700, 400);
		 viewDesert.setSize(1000, 700);

		///SCROLLING LOGIC desert
		if (p.sprite.getPosition().x <= 700 && p.sprite.getPosition().x >= 550) {
			viewDesert.setCenter(p.sprite.getPosition().x, p.sprite.getPosition().y - 120);
		}
		else if (p.sprite.getPosition().x <= 550) { viewDesert.setCenter(550, p.sprite.getPosition().y - 120); }
		else if (p.sprite.getPosition().x >= 700) { viewDesert.setCenter(700, p.sprite.getPosition().y - 120); }
		window.setView(viewDesert);
	
	}


		void Map::setViewWinter(sf::RenderWindow &window, Player & p) {	
		sf::View viewWinter;
		//viewWinter.setSize(600, 600);
		viewWinter.setSize(1000, 600);

		if (p.sprite.getPosition().x <= 5700 && p.sprite.getPosition().x >= 550) {
			viewWinter.setCenter(p.sprite.getPosition().x, p.sprite.getPosition().y- 180);
		}
		else if (p.sprite.getPosition().x <= 550) { viewWinter.setCenter(550 , p.sprite.getPosition().y - 180); }
		else if (p.sprite.getPosition().x >= 5700) { viewWinter.setCenter(5700, p.sprite.getPosition().y - 180); }
		window.setView(viewWinter);
	
	}
