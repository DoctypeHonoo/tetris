<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174625085-4efd2554-fdff-4197-a669-6d9631881b55.png"/>
</p>
<h1 align="center">
   Tetris
</h1>

---

## Motivation : 

Le **Tetris** est un projet de milieu d'année à Epitech, dont le but est de recréer le célèbre jeu Tetris avec la librairie ncurses, dans un terminal.
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174625760-f9e6d3c0-781b-41ac-8057-a00f092cefba.png"/>
</p>

---

## Description :

Le projet se sépare en plusieurs grande parties : 
- L'assembleur, dont le rôle va être de récupérer les code des "champions" (qui sont les programmes destiné à combattre dans la machine virtuelle) et qui va être capable de comprendre le language utilisé, et ainsi créer un binaire qui puisse être exécuter par la machine virtuelle.
- La machine virtuelle, qui va permettre de comprendre les fichiers binaires envoyés par l'assembleur, de les interprêter et qui va pouvoir les exécuter et abriter le combat entre les champions. 
- Les champions, qui vont être codé dans un language redcode qui va pouvoir être interprêter par l'assembleur et qui vont pouvoir se combattre dans la machine virtuelle.

---

## Fonctions Autorisées : 

- (f)open, (f)read, (f)write, getline, lseek, fseek, (f)close, malloc, realloc, free, exit.

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
