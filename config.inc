<?php

// configuration for easyRDF
define("VOCABULARIES_FILE", "vocabularies.ttl");

// HTTP client configuration
define("HTTP_TIMEOUT", 5); // external HTTP request timeout in seconds
define("SPARQL_TIMEOUT", 20); // SPARQL HTTP request timeout in seconds

// interface languages available, and the corresponding system locales
$LANGUAGES = array(
  'en' => 'en_GB.utf8'
);

// default SPARQL endpoint
// a local Fuseki server is usually on localhost:3030
//define("DEFAULT_ENDPOINT", "http://localhost:3030/ds/sparql");
define("DEFAULT_ENDPOINT", "http://localhost:3030/skosmos/sparql");

// how many results (maximum) to load at a time on the search results page
define("SEARCH_RESULTS_SIZE", 20);

// how many items (maximum) to retrieve in transitive property queries
define("DEFAULT_TRANSITIVE_LIMIT", 1000);

// a default location for Twig template rendering
define("TEMPLATE_CACHE", "/tmp/skosmos-template-cache");

// default sparql-query extension, or "Generic" for plain SPARQL 1.1
// set to "JenaText" instead if you use Fuseki with jena-text index
define("DEFAULT_SPARQL_DIALECT", "Generic");

// default email address to send the feedback
define("FEEDBACK_ADDRESS", "");

// email address to set as the envelope sender for feedback messages
define("FEEDBACK_ENVELOPE_SENDER", "");

// whether or not to log caught exceptions
define ("LOG_CAUGHT_EXCEPTIONS", FALSE);

// set to TRUE to enable logging into browser console
define ("LOG_BROWSER_CONSOLE", FALSE);

// set to a logfile path to enable logging into log file
define ("LOG_FILE_NAME", NULL);

# customize the service name
define("SERVICE_NAME", "Joined-up Data Standards");

// customize the service logo by pointing to your logo here.
define("SERVICE_LOGO", "./resource/pics/logo.png");

// customize the css by adding your own stylesheet
define("CUSTOM_CSS", "resource/css/custom.css");

// Customize the base element. Set this if the automatic base url detection doesn't work. For example setups behind a proxy.
// define("BASE_HREF", "http://localhost/Skosmos/");

// whether to display the ui language selection as a dropdown (useful for cases where there are more than 3 languages)
define("UI_LANGUAGE_DROPDOWN", FALSE);

// whether to enable the spam honey pot or not
define("UI_HONEYPOT_ENABLED", TRUE);

// default time a user must wait before submitting a form
define("UI_HONEYPOT_TIME", 5);
