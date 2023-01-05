# battleship_game
Battleship Game project in C

Quand vous travaillez en local sur votre ordinteur, peu importe les changements que vous faites, créer toujours une nouvelle branche de travail afin de pas péter la branche principale. Voyez ça comme un arbre. Le tronc ça sera MAIN et toutes les branches c'est vous qui les créez à côté et une fois fini, on vient les accrocher au tronc.

Pour créer une nouvelle branche : "" git checkout -b "feat/(ou fix/) nom-de-votre-branche" "" (convention de nommage, faites confiance ça vous servira)

Pour mettre le code ici : Vérifier sur quelle branche on se trouve (écrit dans le terminal Git Bash)

1/ Faire un "" git pull "" pour mettre à jour les dernières modifications en date

2/ Ecrire son code de son côté (sur sa branche svp)

3/ Une fois terminé, ouvrir un terminal (Git bash)

4/ Taper la commande "" git status ""

5/ Voir les fichiers qui ont été modifiés

6/ Pour ajouter les changements : "" git add . "" (ou si vous voulez pas tout mettr d'un coup git add "NomDuFichier")

7/ Mettre un message pour aider les autres à comprendre : "" git commit -m "message à écrire" "" (exemple: "feat/nom_de_votre_feature" ou "fix/probleme_de_connexion")

8/ Enfin pour pousser le code jusqu'ici : "" git push "" --> Si erreur : copier la ligne de commande qui apparait "git push --set-upstream origin ...."

9/ gg

Une fois que c'est fait vous ouvrez une Pull Request / Merge Request et comme ça on pourra la fusionner sur la branche MAIN (on fait toujours vérifier son travail par quelqu'un avant de fusionner sinon ça peut tout casser à cause des conflits)

10/ Pour revenir sur la branche principale MAIN une fois fini : "" git checkout main ""

/!\ Il existe une protection pour la branche main, vous ne pouvez pas push votre travail si vous êtes restés dans main. Chaque travail doit être vérifié par un autre dev avant d'être merge.
