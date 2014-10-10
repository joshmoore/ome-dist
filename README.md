omero.dist
==========

Git-enabled binary distribution of OMERO.server

This repository can be checked out rather than downloading OMERO.server zips
from the OME web site. A branch exists for each of the major version **for each
Ice version**. Choose the branch you want and checkout it out locally.
Modifications to the configuration files can be commited and kept up-to-date
after the next OMERO release.

    $ git clone git://github.com/ome/omero.dist
    $ git checkout -b my-server origin/5.0-ice35
    $ bin/omero config set ...
    $ git add etc/grid/config.xml
    $ git commit -m "Production configuration"
    # Next OMERO is released
    $ git fetch origin
    $ git merge origin/5.0-ice35
