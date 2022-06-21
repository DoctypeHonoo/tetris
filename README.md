<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174625085-4efd2554-fdff-4197-a669-6d9631881b55.png"/>
</p>
<h1 align="center">
   Tetris
</h1>

---

## Motivation : 

Le **Tetris** est un projet de milieu d'année à Epitech, dont le but est de recréer le célèbre jeu Tetris dans un terminal avec les règles de la version Gameboy. Le projet doit s'effectuer en utilisant la librairie ncurses, comme représenté si dessous.
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
$ git clone git@github.com:EpitechPromo2026/B-CPE-201-MPL-2-1-corewar-hippolyte.aubert.git
$ cd B-CPE-201-MPL-2-1-corewar-hippolyte.aubert
$ make
```
Les binaires se trouveront alors dans leurs dossiers respectifs, et il vous suffira de le lancer comme ceci : 
```bash
$ ./asm/asm [fichier_contenant_un_champion]
$ ./corewar/corewar [1er_champion] [2eme_champion] [3eme_champion] [4eme_champion]
$ ./bonus/corewar [1er_champion] [2eme_champion] [3eme_champion] [4eme_champion]
```
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174324257-643359eb-7f57-478c-85c6-128e540f568f.png">
</p>

---

## Comment l'utiliser ? : 

Notre corewar possède un asm fonctionnelle qui permet de fournir un binaire exécutable par l'interprêteur. De plus nous avons une machine virtuelle avec un interprêteur graphique réalisé en CSFML, se trouvant dans le dossier `bonus`. Malheureusement, en raison de la difficulté du projet, nous ne sommes pas parvenu à simuler un combat entre les programmes, cependant, ceux-ci se compilent et s'affiche correctement dans la machine virtuelle graphique.

<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174324680-877675c7-df21-46e5-bc8a-01379c644ab8.png">
</p>
