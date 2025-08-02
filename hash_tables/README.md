hash tables
Une table de hachage est une structure de données qui permet de stocker et
de récupérer des données de manière très efficace.
Elle fonctionne en associant une clé (comme le titre d'un livre) à une valeur
(le livre lui-même) en utilisant une fonction de hachage.

Fonction de hachage : C'est le cœur du système.
Cette fonction prend la clé en entrée et la convertit en un index
(un numéro d'emplacement) dans le tableau.
L'index indique où la valeur sera stockée.

Exemple : Une fonction de hachage simple pourrait prendre un mot et renvoyer
la somme des valeurs ASCII de ses lettres, puis faire un modulo sur la taille
du tableau pour obtenir un index valide.

Tableau : C'est là que les données sont réellement stockées.
Le tableau est un ensemble d'emplacements, chacun accessible par son index.

Opérations :

Insertion : Pour ajouter une paire clé-valeur,
la fonction de hachage calcule l'index à partir de la clé.
La valeur est ensuite stockée à cet emplacement dans le tableau.

Recherche : Pour trouver une valeur, vous donnez la clé.
La fonction de hachage calcule l'index, et vous accédez directement
à cet emplacement pour récupérer la valeur.
C'est ce qui rend l'opération si rapide !

Suppression : Le processus est similaire. Vous donnez la clé,
la fonction trouve l'index, et vous supprimez la valeur à cet emplacement.