<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174625085-4efd2554-fdff-4197-a669-6d9631881b55.png"/>
</p>
<h1 align="center">
   Tetris
</h1>

---

## Motivation : 

Le **Tetris** est un projet de milieu d'année à Epitech a réalisé en duo, dont le but est de recréer le célèbre jeu Tetris dans un terminal avec les règles de la version Gameboy. Le projet doit s'effectuer en utilisant la librairie ncurses, comme représenté si dessous.
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174625760-f9e6d3c0-781b-41ac-8057-a00f092cefba.png"/>
</p>

---

## Description :

Le projet va se réaliser en deux grandes parties, en premier le debug mode, qui va permettre d'afficher les paramètres du tetris et qui va donner beaucoup de possibilités, tel que les changements de touches pour diriger les formes, les tourner, ou même la taille de l'écran de jeu. De plus le debug mode va aussi analyser les fichiers contenus dans le dossier tetriminos (dossier contenant toutes les formes qui vont être utilisé dans le jeu) et ne va pas s'exécuter si ils contiennent une erreur. 
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174744406-d40d0d46-32d3-4598-a1e2-011713d89689.png"/>
</p>
La deuxième partie est bien évidemment la partie graphique et donc le jeu en lui même vu sur l'image plus haut.

---

## Fonctions Autorisées : 

- rand, srand, getopt, getopt_long, clock, et toute les fonctions utilisées pour les projets PSU jusqu'à maintenant.

---

## Installer & Lancer le Projet :

Ouvrez un terminal et dirigez vous ou vous souhaitez que le projet soit installé, puis exécutez les commandes suivantes : 
```bash
$ git clone git@github.com:DoctypeHonoo/tetris.git
$ cd tetris
$ make
```
Les binaires se trouveront alors dans leurs dossiers respectifs, et il vous suffira de le lancer comme ceci : 
```bash
$ ./tetris
```
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174745410-5d25f436-2e2b-4a23-bc48-53fb88cc2317.png">
</p>

---

## Comment l'utiliser ? : 

Notre Tetris possède un Debug mode totallement fonctionnel, mais la version graphique du jeu n'a pas encore été réalisée. Comme vu plus haut, pour afficher la totalité du debug mode, il suffit d'inclure le -D dans la ligne d'exécution du binaire : 
```bash
$ ./tetris -D
```
Pour modifier tout autres paramètres, il suffit d'utiliser le - associé : 
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174747739-a1630497-701d-4fba-b893-ebb43d89e758.png">
</p>
